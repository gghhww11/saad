#include <list>
#include <string>
#include <stdio.h>
#include "House.h"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <locale.h>

using namespace System;
using namespace System::IO;
using namespace std;

void BaseOfHouses::ReadBase() {

	House temp;
	setlocale(LC_CTYPE, "Russian");
	String^ file = gcnew String(filename);
	ifstream F(filename);
	if (F.is_open()) {
		F.close();
		StreamReader^ stream = gcnew StreamReader(file);
		while (!stream->EndOfStream) {
			temp.owner = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.city = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.district = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.street = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.corp = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.houseType = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.year = stoi(msclr::interop::marshal_as<string>(stream->ReadLine()));
			temp.numOfRooms = stoi(msclr::interop::marshal_as<string>(stream->ReadLine()));
			temp.parkAvlbt =
				(msclr::interop::marshal_as<string>(stream->ReadLine()) == "False") ? false : true;
			temp.storeAvlbt =
				(msclr::interop::marshal_as<string>(stream->ReadLine()) == "False") ? false : true;
			temp.schoolAvlbt =
				(msclr::interop::marshal_as<string>(stream->ReadLine()) == "False") ? false : true;
			// требования к жилью
			temp.requirements.rcity = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.requirements.rdistrict = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.requirements.rnumOfRooms = stoi(msclr::interop::marshal_as<string>(stream->ReadLine()));
			temp.requirements.rhouseType = msclr::interop::marshal_as<string>(stream->ReadLine());
			temp.requirements.ryear = stoi(msclr::interop::marshal_as<string>(stream->ReadLine()));
			temp.requirements.rparkAvlbt =
				(msclr::interop::marshal_as<string>(stream->ReadLine()) == "False") ? false : true;
			temp.requirements.rstoreAvlbt =
				(msclr::interop::marshal_as<string>(stream->ReadLine()) == "False") ? false : true;
			temp.requirements.rschoolAvlbt =
				(msclr::interop::marshal_as<string>(stream->ReadLine()) == "False") ? false : true;

			base.push_back(temp);
		}
		stream->Close();
	}
	else {
		ofstream fout;
		fout.open(filename, ios_base::out);
		fout.close();
	}
}

bool BaseOfHouses::Add(House house, string pass) {

	if (!(house.owner == "") && !(pass == "")) {

		list<string> list;
		string line;
		std::ifstream stream("C:\\Users\\home\\login.txt");
		while (!stream.eof()) {
			getline(stream, line); list.push_back(line);
		}
		stream.close();
		for (string i : list) { if (i == house.owner) return false; }
		// добавление логина и пароля в бд
		std::ofstream login("C:\\Users\\home\\login.txt", ios::app);
		login << house.owner << "\n";
		login.close();
		std::ofstream password("C:\\Users\\home\\password.txt", ios::app);
		password << pass << "\n";
		password.close();


		if (base.size() == 0) ReadBase();

		base.push_back(house);	// добавление в список
		// добавление в базу данных
		toFile(filename, house);
		return true;
	}
	else return false;
}

void BaseOfHouses::AddRequirements(House house) {

	toFile(filename, house, false);
	base.clear();
	ReadBase();
}

bool BaseOfHouses::toFile(const char* filename, House house, bool IsHouseInfo, bool append) {

	bool isNew = false;
	String^ file = gcnew String(filename);
	ifstream F(filename);
	if (F.is_open()) {
		isNew = false;
		F.close();
	}
	else {
		isNew = true;
		F.close();
		ofstream fout;
		fout.open(filename, ios_base::out);
		fout.close();
	}

	setlocale(LC_CTYPE, "Russian");
	StreamWriter^ stream = (append) ? gcnew StreamWriter(file, true) : gcnew StreamWriter(file);

	if (IsHouseInfo) {
		if (house.owner != "") {
			stream->WriteLine(gcnew String(house.owner.c_str()));
			stream->WriteLine(gcnew String(house.city.c_str()));
			stream->WriteLine(gcnew String(house.district.c_str()));
			stream->WriteLine(gcnew String(house.street.c_str()));
			stream->WriteLine(gcnew String(house.corp.c_str()));
			stream->WriteLine(gcnew String(house.houseType.c_str()));
			stream->WriteLine(house.year);
			stream->WriteLine(house.numOfRooms);
			stream->WriteLine(house.parkAvlbt);
			stream->WriteLine(house.storeAvlbt);
			stream->WriteLine(house.schoolAvlbt);
		}
		else {
			stream->Close();
			return false;
		}
	}
	else {
		if ((append) && (!isNew)) {
			stream->WriteLine(gcnew String(house.requirements.rcity.c_str()));
			stream->WriteLine(gcnew String(house.requirements.rdistrict.c_str()));
			stream->WriteLine(house.requirements.rnumOfRooms);
			stream->WriteLine(gcnew String(house.requirements.rhouseType.c_str()));
			stream->WriteLine(house.requirements.ryear);
			stream->WriteLine(house.requirements.rparkAvlbt);
			stream->WriteLine(house.requirements.rstoreAvlbt);
			stream->WriteLine(house.requirements.rschoolAvlbt);
		}
		else {
			stream->Close();
			return false;
		}
	}
	stream->Close();
	return true;

}

House BaseOfHouses::Find(String^ user) {
	std::string u = msclr::interop::marshal_as<std::string>(user);

	if (base.size() == 0) ReadBase();
	for (House house : base) {
		if (house.owner == u) {
			return house;
		}
	}
	House h;
	return h;
}

bool BaseOfHouses::Edit(House user) {

	String^ s = gcnew String(user.owner.c_str());
	House flag = Find(s);
	if ((flag.owner == "") || (user.owner == "")) return false;

	list<House> temp;
	if (base.size() == 0) ReadBase();

	for (House i : base) {
		if (i.owner == user.owner) {
			continue;
		}
		temp.push_back(i);
	}

	temp.push_back(user);
	base = temp;
	bool first = true;
	for (House house : base) {

		if (first) {
			toFile(filename, house, true, false);
			first = false;
		}
		else toFile(filename, house);

		toFile(filename, house, false);

	}
	return true;
}

list<House> BaseOfHouses::FindExchage(House user) {

	if (base.size() == 0) ReadBase();
	list<House> result;
	//дома по требованиям
	for (House h : base) {
		if ((user.requirements.rcity == h.city) && (user.requirements.rdistrict == h.district)
			&& (user.requirements.rhouseType == h.houseType)
			&& (user.requirements.rnumOfRooms <= h.numOfRooms)
			&& (user.requirements.ryear <= h.year)) {
			// если для пользователя важно наличие магазинов, парков, школ, 
			// тогда учитываем этот факт
			if (user.requirements.rparkAvlbt) {
				if (!h.parkAvlbt) continue;
			}
			if (user.requirements.rstoreAvlbt) {
				if (!h.storeAvlbt) continue;
			}
			if (user.requirements.rschoolAvlbt) {
				if (!h.schoolAvlbt) continue;
			}
			result.push_back(h);
			continue;
		}
	}
	// обратная проверка
	list<House> result1;
	for (House h : result) {
		if ((user.city == h.requirements.rcity) && (user.district == h.requirements.rdistrict)
			&& (user.houseType == h.requirements.rhouseType)
			&& (user.numOfRooms >= h.requirements.rnumOfRooms)
			&& (user.year >= h.requirements.ryear))
		{
			if (h.requirements.rparkAvlbt) {
				if (!user.parkAvlbt) continue;
			}
			if (h.requirements.rstoreAvlbt) {
				if (!user.storeAvlbt) continue;
			}
			if (h.requirements.rschoolAvlbt) {
				if (!user.schoolAvlbt) continue;
			}
			result1.push_back(h);
		}
	}
	return result1;
}

bool BaseOfHouses::Exchange(String^ user, int index) {

	House house1 = Find(user);
	if (house1.owner == "") return false;
	House house2;
	int i = 0;
	list<House> list = FindExchage(house1);
	if ((list.size() - 1 < index) || (index < 0)) return false;

	for (House item : list) {
		if (index == i) {
			house2 = item;
			break;
		}
		i++;
	}
	Refusual(house1);
	Refusual(house2);
	return true;
}

bool BaseOfHouses::Refusual(House house) {

	if (base.size() == 0) ReadBase();

	String^ s = gcnew String(house.owner.c_str());
	House flag = Find(s);
	if ((flag.owner == "") || (house.owner == "")) return false;

	list<House> temp;

	for (House item : base) {
		if (item.owner == house.owner) continue;
		temp.push_back(item);
	}

	base = temp;
	bool first = true;

	for (House house : base) {
		if (first) {
			toFile(filename, house, true, false);
			first = false;
		}
		else toFile(filename, house);

		toFile(filename, house, false);

	}

}
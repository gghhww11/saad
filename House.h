#pragma once
#include <list>
#include <string>
#include <stdio.h>
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace std;


struct House {
	string owner = "";
	string city = "";
	string district = "";
	string street = "";
	string corp = "";
	int numOfRooms = 1;
	string houseType = "";
	int year = 0;
	bool schoolAvlbt = false;
	bool storeAvlbt = false;
	bool parkAvlbt = false;
	struct R {
		string rcity = "";
		string rdistrict = "";
		int rnumOfRooms = 1;
		string rhouseType = "";
		int ryear = 0;
		bool rschoolAvlbt = false;
		bool rstoreAvlbt = false;
		bool rparkAvlbt = false;
	}requirements;
};
	

class BaseOfHouses {
	private:
	list<House> base;
	const char* filename = "C:\\Users\\1395358\\Downloads\\курсавая\\New folder\\Project\\home.txt";
	public:
		void ReadBase();	// чтение базы данных из файла
		bool Add(House house, string pass = "");// первый этап регистрации пользователя
		void AddRequirements(House req);		// второй этап регистрации пользователя
		bool toFile(const char* filename, House house, bool IsHouseInfo = true, bool append = true);	// запись в файл
		House Find(String^ user);				// поиск пользователя в базе данных
		bool Edit(House user);					// редактирование информации о пользователе в базе данных 
		list<House> FindExchage(House user);	// поиск подходящих вариантов для обмена жилья
		bool Exchange(String^ user, int index);	// обмен жилья
		bool Refusual(House house);				// отказ от обмена жилья
};
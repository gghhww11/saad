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
	const char* filename = "C:\\Users\\1395358\\Downloads\\��������\\New folder\\Project\\home.txt";
	public:
		void ReadBase();	// ������ ���� ������ �� �����
		bool Add(House house, string pass = "");// ������ ���� ����������� ������������
		void AddRequirements(House req);		// ������ ���� ����������� ������������
		bool toFile(const char* filename, House house, bool IsHouseInfo = true, bool append = true);	// ������ � ����
		House Find(String^ user);				// ����� ������������ � ���� ������
		bool Edit(House user);					// �������������� ���������� � ������������ � ���� ������ 
		list<House> FindExchage(House user);	// ����� ���������� ��������� ��� ������ �����
		bool Exchange(String^ user, int index);	// ����� �����
		bool Refusual(House house);				// ����� �� ������ �����
};
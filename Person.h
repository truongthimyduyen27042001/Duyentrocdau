#pragma once
#include <iostream>
#include<string>
using namespace std;
class Person
{
protected : 
	string ten;
	int tuoi;
	string diachi;
	bool gioitinh;
public : 
	Person();
	Person(const string&, const int&, const string&, const bool&);
	~Person();
	friend ostream& operator<<(ostream&, const Person&);
};


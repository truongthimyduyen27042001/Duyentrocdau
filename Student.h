#pragma once
#include "Person.h"
//#include"Class.h"
class Class;
class Student:public Person
{
private : 
	string MSSV;
	//Class lopSH;
	double DTB;
public : 
	//Student();
	Student();
	Student(const string&, const int&, const string&, const bool&, const string& , /*Class lop,*/ const double&);
	~Student();
	friend ostream& operator<<(ostream&, const Student&);
	Student& operator=(const Student&);
	string getMSSV();
	double getDTB();
	void setTen(const string&);
	void setGioitinh(const bool&);
	void setDiachi(const string&);
	void setTuoi(const int&);
	void setDTB(const float&);
	//Student(const Student&);
	void setData();
	void display();
};


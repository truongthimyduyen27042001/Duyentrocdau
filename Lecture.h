#pragma once
#include "Person.h"
class Lecture :public Person
{
private:
	string MGV;
	string capBac;
public:
	Lecture();
	Lecture(const string&, const int&, const string&, const bool&, const string&, const string&);
	~Lecture();
	void setData();
	string getTen();
	friend ostream& operator<<(ostream&, const Lecture&);

};


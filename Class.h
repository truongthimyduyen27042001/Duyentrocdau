#pragma once
#include "Student.h"
#include "Lecture.h"
class Class
{
public : 
	string tenlsh;
	Student   *danhsach;
	Lecture *GVCN;
	int siso;


public : 
	Class();
	/*Class(const string&, Student**, Lecture* , const int&);*/
	Class(const string&,Student*,Lecture, const int&);
	~Class();
	void addStudent(const Student&  );
	friend ostream& operator<<(ostream&, const Class&);
	void updateStudent(char*);
	void deleteStudent(char* );
	//void Show();
	void SearchStudent( char* );
	void sapXep();

};


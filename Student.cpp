#include "Student.h"
//#include <iostream>
//using namespace std;
//#include <string.h>
using namespace std;
//Student::Student():Person(){
//	this->MSSV = " ";
//	lopSH();
//	this->DTB = 0;
//}
Student::Student(const string& ten,const int& tuoi,const string& diachi, const bool& gioitinh,const string& masv,/*Class lop,*/ const double& dtb)
:	Person(ten,tuoi,diachi,gioitinh)
{
	this->MSSV = masv;
	this->DTB = dtb;

}
Student::Student()
{

}

Student::~Student() {

}
void Student::setData() {

	cout << "Nhap ma so sinh vien : ";
	cin >> MSSV;
	cin.ignore();
	cout << "Nhap ten sinh vien : ";
	getline(cin, ten);
	cout << "Nhap tuoi sinh vien : ";
	cin >> tuoi;
	cout << "Nhap dia chi cua sinh vien : ";
	cin.ignore();
	getline(cin, diachi);
	cout << "Nhap gioi tinh cua sinh vien :  \n1. Nam \n0. Nu\n";
	cin >> gioitinh;
	cout << "Nhap diem trung binh cua sinh vien : ";
	cin >> DTB;

}
ostream& operator<<(ostream& o, const Student& s) {
	cout << "\n---------------------------------------\n";
	o << "Ma sinh vien cua sinh vien : " << s.MSSV << endl;
	o << "Ten cua sinh vien : " << s.ten << endl;
	o << "Tuoi cua sinh vien : " << s.tuoi << endl;
	o << "Dia chi cua sinh vien : " << s.diachi << endl;
	o << "Gioi tinh cua sinh vien : ";
	switch(s.gioitinh) {
	case 1: cout << "nam"<<endl;
	case 2: cout << "nu" << endl;
	}
	o << "Diem trung binh cua sinh vien : " << s.DTB << endl;
	cout << "\n---------------------------------------\n";

	return o;

}



void Student::display() {
	cout << "Ma so sinh vien : " << MSSV << endl;
	cout << "Ten sinh vien : " << ten << endl;
	cout << "Dia chi sinh vien : " << diachi << endl;
	cout << "Tuoi sinh vien : " << tuoi << endl;
	cout << "Gioi tinh sinh vien : ";
	switch (gioitinh) {
	case 1: cout << "nam" << endl;
	case 0: cout << "nu" << endl;
	}
	cout << "Diem trung binh sinh vien : " << DTB << endl;


}
string Student::getMSSV() {
	return this->MSSV;
}
//Student::Student(const Student& s) {
//	this->ten = s.ten;
//	this->diachi = s.diachi;
//	this->DTB = s.DTB;
//	this->gioitinh = s.gioitinh;
//	this->MSSV = s.MSSV;
//	this->tuoi = s.tuoi;
//}

void Student::setTen(const string& ten) {
	this->ten = ten;
}
void Student::setGioitinh(const bool& gioitinh) {
	this->gioitinh = gioitinh;
}
void Student::setDiachi(const string& diachi) {
	this->diachi = diachi;
}
void Student::setTuoi(const int& tuoi) {
	this->tuoi = tuoi;
}
void Student::setDTB(const float& dtb) {
	this->DTB = dtb;
}
double Student::getDTB() {
	return this->DTB;
}
Student& Student::operator=(const Student& s) {
	this->ten = s.ten;
	this->tuoi = s.tuoi;
	this->gioitinh = s.gioitinh;
	this->diachi = s.diachi;
	this->MSSV = s.MSSV;
	this->DTB = s.DTB;
	return (*this);
}

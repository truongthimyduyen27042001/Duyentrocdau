#include "Lecture.h"
//#include <iostream>
//using namespace std;	
#include "string"
#include "Person.h"
Lecture::Lecture() :Person(){
	this->MGV = " ";
	this->capBac = " ";
}
Lecture::Lecture(const string& ten, const int& tuoi, const string& diachi, const bool& gioitinh, const string& magv, const string& capbac)
:Person(ten,tuoi,diachi,gioitinh),MGV(magv),capBac(capbac)
{

}
Lecture::~Lecture() {

}
ostream& operator<<(ostream& o, const Lecture& gv) {
	o << "Ma giao vien : " << gv.MGV << endl;
	o << "Ten giao vien : " << gv.ten << endl;
	o << "Tuoi cua giao vien : " << gv.tuoi << endl;
	o << "Dia chi giao vien : " << gv.diachi << endl;
	o << "Gioi tinh giao vien : ";
	switch (gv.gioitinh) {
	case 1: cout << "nam " << endl;
	case 2: cout << "nu " << endl;
	}
	o << "Cap bac giao vien : " << gv.capBac << endl;
	return o;
}
void Lecture::setData() {
	cout << "\n-------------------------------------\n";
	cout << "\nNhap ma giao vien : ";
	cin >> MGV;
	cout << "Nhap ten giao vien : ";
	cin.ignore();
	getline(cin, ten);
	cout << "Nhap tuoi cua giao vien : ";
	cin >> tuoi;
	cout << "Nhap dia chi cua giao vien : ";
	cin.ignore();
	getline(cin, diachi);
	cout << "Nhap gioi tinh cua giao vien : ";
	cout << "\n1.Nam \n0.Nu " << endl;
	cin >> gioitinh;
	cout << "Nhap cap bac cua giao vien : ";
	cout << "\n1. assignat professor\n";
	cout << "2.associate professor\n ";
	cout << "3.full professor\n";
	int choose;
	cin >> choose;
	switch (choose) {

	case 1: capBac = "assignat professor";
	case 2: capBac = "associate professor";
	case 3: capBac = "full professor";
	default: capBac = "nothing";

	}
	
}
string Lecture::getTen() {
	return this->ten;
}

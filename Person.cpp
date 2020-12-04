#include "Person.h"
Person::Person() {
	this->ten = " ";
	this->tuoi = 0;
	this->diachi = " ";
	this->gioitinh = 0;
}
Person::Person(const string& ten, const int& tuoi, const string& diachi, const bool& gioitinh)
:ten(ten),tuoi(tuoi),diachi(diachi),gioitinh(gioitinh)
{
	
}
Person::~Person() {

}
ostream& operator<<(ostream& o, const Person& p) {
	o << "Ten : " << p.ten << ",tuoi : " << p.tuoi << ",diachi: " << p.diachi << ",gioitinh : " << p.gioitinh << "\n";
	return o;
}

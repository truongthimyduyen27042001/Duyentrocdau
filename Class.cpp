#include "Class.h"
//#include <iostream>
//#include "Student.h"
//using namespace std;
Class::Class() {
	this->tenlsh = " ";
	this->danhsach = nullptr;
	this->GVCN = nullptr;
	this->siso = 0;
}
Class::Class(const string& tenlsh, Student* danhsach, Lecture gvcn, const int& siso) 
//:tenlsh(tenlsh),danhsach(danhsach),GVCN(gvcn),siso(siso)
{
    *(this->GVCN) = gvcn;

}
Class::~Class() {
	delete[] this->danhsach;
	//delete this->GVCN;
}


void Class::addStudent(const Student& s) {   
  
    if (this->siso== 0) {
        this->danhsach = new Student[this->siso + 1];
        this->danhsach[this->siso] = s;
    }
    else {
        Student* temp = new Student[this->siso];
        for (int i = 0; i < this->siso; i++) {
            *(temp + i) = *(this->danhsach + i);
        }
        delete[] this->danhsach;
        this->danhsach = new Student[this->siso + 1];
        for (int i = 0; i < this->siso; i++) {
            *(this->danhsach + i) = *(temp + i);
        }
        this->danhsach[this->siso] = s;

    }
    this->siso++;
}

ostream& operator<<(ostream& o, const Class& db) {
    cout << "Ten lop : ";
    cout << db.tenlsh;
    cout << "\n";
    cout << "Giao vien chu nhiem: ";
    cout << db.GVCN->getTen();
    for (int i = 0; i < db.siso; i++) {
        o << *(db.danhsach + i);


    }
    o << endl;
    return o;
}
void Class::SearchStudent( char masv[]) {

    for (int i = 0; i < this->siso; i++) {
        if ((this->danhsach + i)->getMSSV() == masv) {
            cout << *(this->danhsach + i);
            break;
        }
    }
   
}
void Class::updateStudent(char masv[]) {
    int index;

    for (int i = 0; i < this->siso; i++) {
        if ((this->danhsach + i)->getMSSV() == masv) {
            index = i;
            break;
        }
    }
    cout << "|1.Ten sinh vien\n";
    cout << "|2.Tuoi sinh vien\n";
    cout << "|3.Gioi tinh sinh vien \n";
    cout << "|4.Dia chi cua sinh vien\n";
    cout << "|5.Diem trung binh\n";
    int choose;
    cout << "\nNHAP THONG TIN BAN MUON THAY DOI \n";
    cin >> choose;
    switch (choose) {
    case 1: {
        cout << "Nhap ten can thay doi : ";
        string ten;
        cin.ignore();
        getline(cin, ten);
        (this->danhsach+index)->setTen(ten);
        break;
    }
       
    }
}
void Class::deleteStudent(char masv[]) {

    int index;

    for (int i = 0; i < this->siso; i++) {
        if ((this->danhsach + i)->getMSSV() == masv) {
            index = i;
            break;
        }
    }
        Student* temp = new Student[this->siso];
        for (int i = 0; i < this->siso; i++) {
            *(temp + i) = *(this->danhsach + i);
        }
        delete[] this->danhsach;
        this->danhsach = new Student[this->siso - 1];
        for (int i = 0; i < index; i++) {
            *(this->danhsach + i) = *(temp + i);
        }
        for (int i = index; i < siso - 1; i++) {
            *(this->danhsach + i) = *(temp + i + 1);
        }
        delete[] temp;
        siso--;
        cout << "***** Da xoa \n";
    
}
void Class::sapXep() {
    Student temp;
    for (int i = 0; i < this->siso - 1; i++) {
        for (int j = i; j < this->siso; j++) {
            if ((this->danhsach + i)->getDTB() > (this->danhsach + j)->getDTB()) {
                temp = *(this->danhsach + i);
                *(this->danhsach + i) = *(this->danhsach + j);
                *(this->danhsach + j) = temp;
                
            }
        }
    }
}

            
       
 

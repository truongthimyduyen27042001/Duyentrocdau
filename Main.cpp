



#include <cstdlib>

#include <iostream>
#include "Class.h"
#include "Lecture.h"
#include "Student.h"
using namespace std;
void Title() {
    cout << " +------------------------------------------------------------------------------------------------------+\n";
    cout << " |	    		CHUONG TRINH QUAN LY LOP HOC VA SINH VIEN		      				|\n";
    cout << " |		    	Supervisor:  Dang Hoai Phuong		              				|\n";
    cout << " | 		    	Students: Truong Thi My Duyen		       				  	|\n";
    cout << " |			Class:  19TCLC - DT4				      				|\n";
    cout << " +------------------------------------------------------------------------------------------------------+\n";
}

void Menu() {
    system("cls");
    cout << " +------------------------------------------------------------------------------------------------------------------+";
    cout << "\n |		 	                 	MENU CHUC NANG	  					       	    |";
    cout << "\n +------------------------------------------------------------------------------------------------------------------+";
    cout << "\n |				1 - THEM SINH VIEN			      			        	    |";
    cout << "\n |				2 - SUA THONG TIN SINH VIEN		      					    |";
    cout << "\n |				3 - HIEN THI DANH SACH SINH VIEN				      		    |";
    cout << "\n |				4 - SAP XEP DANH SACH THEO DIEM			     	          		    |";
    cout << "\n |				5 - TIM KIEM SINH VIEN			      					    |";
    cout << "\n |				6 - XOA SINH VIEN			      					    |";
    cout << "\n |				0 - THOAT			    	      					    |";
    cout << "\n +-------------------------------------------------------------------------------------------------------------------+";
}
int main()
{
    int key;
    Class qlsv;
    Title();
    getchar();
    do {
        
        Menu();
        cout << "Nhap lua chon cua ban : ";
        cin >> key;
    } while (key != 0);
    switch (key) {
    case 1: qlsv.addStudent();
    }


    
  //  Class qlsv;
  //  qlsv.tenlsh = "19TCLC_DT4";
  //  Lecture gvcn("le thi my hanh",20,"54 nguyen luong bang",0,"102ltmh","full professor");

  ///*  cout << "Nhap giao vien chu nhiem ";
  //  gvcn.setData();*/
  //  qlsv.GVCN = &gvcn;

  ///*  int n;
  //  cout << "Nhap so luong sinh vien ban muon them : ";
  //  cin >> n;*/
  // /* Student *s=new Student[n];
  //  for (int i = 0; i < n; i++) {
  //      s[i].setData();
  //      qlsv.addStudent(s[i]);
  //  }*/
  //  Student s2("han ", 19, "78 ngo van so", 0, "102190160", 6.8);
  //  Student s1("duyen ", 19, "62 ngo si lien", 0, "102190161", 7.8);
  //  Student s3("phuong ", 19, "96 dien bien phu", 0, "102190167", 9.8);
  //    qlsv.addStudent(s1);
  //    qlsv.addStudent(s2);
  //    qlsv.addStudent(s3);

  //  cout << qlsv << endl;
  //  cout << "So luong sinh vien cua lop la : " << qlsv.siso << endl;
  //  cout << "\n\n\n";
  //  cout << "=============================================================\n\n\n\n";
  // /* char masvien[20];
  //  cout << "Nhap ma so sinh vien ban can tim thong tin : ";
  //  cin >> masvien;
  //  cin.ignore();
  //  qlsv.SearchStudent(masvien);*/
  //  cout << "\n\n\n\n\n\n";
  //  cout << "==========================================\n";
  // /* cout << "UPDATE INFORMATION OF STUDENT\n";
  //  cout << "Nhap ma so sinh vien ban can thay doi thong tin : ";
  //  char masvien[20];
  //  cin >> masvien;
  //  cin.ignore();
  //  qlsv.updateStudent(masvien);
  //  cout << "\nSau khi update : \n";
  //  cout << qlsv;*/
  //  //char masvien[20];
  //  //cout << "\nNhap ma sinh vien ban muon xoa: ";
  //  //cin >> masvien;
  //  //cin.ignore();
  //  //qlsv.deleteStudent(masvien);
  //  //cout << "\nSau khi xoa : ";
  //  //cout << qlsv;
  //  //cout << "si so : " << qlsv.siso<<"\n";
  //  //qlsv.addStudent(s2);
  //  //cout << qlsv;
  //  cout << "Sau khi sap xep : ";
  //  qlsv.sapXep();
  //  cout << qlsv;

  
}


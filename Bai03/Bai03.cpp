#include<iostream>
#include<conio.h>
#include"CDiem2D.h"
using namespace std;
void main()
{
	//CDiem2D* A = new CDiem2D();
	//cout << "Nhap diem A" << endl;
	//A->Nhap();

	//CDiem2D* B = new CDiem2D();
	//cout << "Nhap diem B" << endl;
	//B->Nhap();

	CDiem2D* A = new CDiem2D(0, 0);
	CDiem2D* B = new CDiem2D(0, 0);
	
	cout << "\nKhoang cach AB = " << A->TinhKhoangCach(B);
	
	CDiem2D* M = A->TimTrungDiem(B);
	cout << "\nTrung diem M";
	M->Xuat();

	delete A;
	delete B;
	delete M;

	_getch();
}
#include<iostream>
#include"CDiem2D.h"
using namespace std;
CDiem2D::CDiem2D()
{
	x = y = 0;
}
CDiem2D::CDiem2D(double x, double y)
{
	this->x = x;
	this->y = y;
}
CDiem2D::~CDiem2D() {}
void CDiem2D::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}
void CDiem2D::Xuat()
{
	cout << "(" << x << ", " << y << ")";
}
double CDiem2D::TinhKhoangCach(CDiem2D* B)
{
	return sqrt(pow(this->x - B->x, 2) + pow(this->y - B->y, 2));
}
CDiem2D* CDiem2D::TimTrungDiem(CDiem2D* B)
{
	CDiem2D* M = new CDiem2D();
	M->x = (this->x + B->x) / 2;
	M->y = (this->y + B->y) / 2;
	return M;
}
class CDiem2D
{
private:
	double x, y;
public:
	CDiem2D();
	CDiem2D(double x, double y);
	~CDiem2D();
	void Nhap();
	void Xuat();
	double TinhKhoangCach(CDiem2D* B);
	CDiem2D* TimTrungDiem(CDiem2D* B);
};
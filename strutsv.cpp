#include<iostream>
#include<cmath>
#include<string>
using namespace std;
typedef struct ngaysinh{
	int ngay,thang,nam;
}ns;
typedef struct sv{
	string hovaten,que;
	float diemgiuaky,diemcuoiky,tongdiem;
	ns ngaysinh;
}sv;
void nhap(sv &sinhvien);
bool tongdiem(sv &sinhvien);
void xuat(sv sinhvien);
int main()
{
	sv sinhvienA;
	nhap(sinhvienA);
	tongdiem(sinhvienA);
	xuat(sinhvienA);
	return 0;
}
void nhap(sv &sinhvien)
{
	cout<<"Nhap vao ten sinh vien: ";
	fflush(stdin);
	getline(cin,sinhvien.hovaten);
	cout<<"Nhap vao ngay sinh:"<<endl;
	cout<<"Ngay: ";
	cin>>sinhvien.ngaysinh.ngay;
	cout<<"Thang: ";
	cin>>sinhvien.ngaysinh.thang;
	cout<<"Nam: ";
	cin>>sinhvien.ngaysinh.nam;
	cout<<"Nhap vao Que: ";
	fflush(stdin);
	getline(cin,sinhvien.que);
	cout<<"Nhap vao diem giua ky: ";
	cin>>sinhvien.diemgiuaky;
	cout<<"Nhap vao diem cuoi ky: ";
	cin>>sinhvien.diemcuoiky;
}
bool tongdiem(sv &sinhvien)
{
	sinhvien.tongdiem=sinhvien.diemcuoiky*0.6+sinhvien.diemgiuaky*0.4;
}
void xuat(sv sinhvien)
{
	cout<<"Ten SV: "<<sinhvien.hovaten<<endl;
	cout<<"Ngay sinh: "<<sinhvien.ngaysinh.ngay<<"/"<<sinhvien.ngaysinh.thang<<"/"<<sinhvien.ngaysinh.nam<<endl;
	cout<<"Que: "<<sinhvien.que<<endl;
	cout<<"Diem thi:"<<endl;
	cout<<"Diem giua ky: "<<sinhvien.diemgiuaky<<endl;
	cout<<"Diem cuoi ky: "<<sinhvien.diemcuoiky<<endl;
	cout<<"Diem tong ket: "<<sinhvien.tongdiem<<endl;
}

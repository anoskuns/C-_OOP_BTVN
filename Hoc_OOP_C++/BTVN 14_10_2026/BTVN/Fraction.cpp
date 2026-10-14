#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;

// Ham UCLN 
ll UCLN(ll a, ll b) {
	a = abs(a);
	b = abs(b);	
	if (b == 0) return a;
	return UCLN(b, a%b);
}

ll BCNN(ll a, ll b) {
	return a / UCLN(a, b) * b;
}



// Khai bao ban dau 
Fraction::Fraction(ll t, ll m) {
	this->tu = t; 
	if (m != 0) {
		this -> mau = m;
	}
	else {
		this -> mau = 1;
	}
}

// Setup ham nhap
istream& operator>>(istream& inDev, Fraction& f) {
	cout << "Nhap tu so = "; 
	inDev >> f.tu;

	do
	{
		cout << "Nhap mau so = ";
		inDev >> f.mau;

		if (f.mau == 0) {
			cout << "Vui long nhap lai!!";
		}

	} while (f.mau==0);
	return inDev;
}

// Setup ham xuat 
ostream& operator<<(ostream& outDev, Fraction f) {

	if (f.mau == 1) {
		outDev << f.tu;
	}
	else if (f.tu == 0) {
		outDev << 0;
	}
	else if (f.mau == -1) {
		outDev << -f.tu;
	}
	else{
		outDev << f.tu << "/" << f.mau;
	}
	return outDev;
}


//Ham get_tu()
ll Fraction::get_tu() const{
	return tu;
}

// Ham get_mau()
ll Fraction::get_mau() const {
	return mau;
}

// Ham set_tu()
void Fraction::set_tu(ll a) {
	tu = a;
}

// Ham set_mau()
void Fraction::set_mau(ll b) {
	if (b != 0) {
		mau = b;
	}
	else {
		cout << "Khong the gan mau so bang 0" << endl;
	}
}

// Ham nghich dao
void Fraction::nghichdao() {

	if (tu != 0) {
		ll tam;
		tam = tu;
		tu = mau;
		mau = tam;
	}
	else {
		cout << "Khong the nghich dao phan so co tu = 0" << endl;
	}

}

// Rut gon phan so
void Fraction::rutgon() {
	ll ucln = UCLN(tu, mau);
	tu /= ucln;
	mau /= ucln;
}

//Cac phep tinh toan
Fraction operator+(Fraction a, Fraction b) {
	Fraction TongPhanSo(0,1);
	TongPhanSo.tu = a.tu * b.mau + a.mau * b.tu;
	TongPhanSo.mau = a.mau * b.mau;
	TongPhanSo.rutgon();
	return TongPhanSo;
}

Fraction operator-(Fraction a, Fraction b) {
	Fraction HieuPhanSo(0, 1);
	HieuPhanSo.tu = a.tu * b.mau - a.mau * b.tu;
	HieuPhanSo.mau = a.mau * b.mau;
	HieuPhanSo.rutgon();
	return HieuPhanSo;
}

Fraction operator*(Fraction a, Fraction b) {
	Fraction TichPhanSo(0, 1);
	TichPhanSo.tu = a.tu * b.tu;
	TichPhanSo.mau = a.mau * b.mau;
	TichPhanSo.rutgon();
	return TichPhanSo;
}

Fraction operator/(Fraction a, Fraction b) {
	if (b.tu == 0) {
		cout << "Khong the chia cho 0" << endl;
		return Fraction(0, 1);
	}
	else {
		Fraction ChiaPhanSo(0, 1);
		ChiaPhanSo.tu = a.tu * b.mau;
		ChiaPhanSo.mau = a.mau * b.tu;
		ChiaPhanSo.rutgon();
		return ChiaPhanSo;
	}
}

	

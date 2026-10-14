#include "Fraction.h"
using namespace std;

// Khai bao ban dau
Fraction::Fraction(ll t, ll m) {
	tu = t;
	if (m != 0) {
		mau = m;
	}
	else {
		mau = 1;
	}
}

//Toan tu nhap
istream& operator>>(istream& inDev, Fraction& f) {
	cout << "Nhap tu so = ";
	inDev >> f.tu;

	do
	{
		cout << "Nhap mau so = ";
		inDev >> f.mau;
		if (f.mau == 0) {
			cout << "Vui long nhap lai!! Mau phai khac 0";
		}

	} while (f.mau == 0);
	return inDev;
}


// Toan tu xuat
ostream& operator<<(ostream& outDev, Fraction f) {
	cout << "Phan so da nhap = ";
	if (f.mau == 1) {
		outDev << f.tu;
	}
	else if (f.tu == 0) {
		outDev << 0;
	}
	else {
		outDev << f.tu << "/" << f.mau;
	}
	return outDev;
}

#pragma once
#include <iostream>
using namespace std;

using ll = long long;

class Fraction{
	private:
		ll tu, mau;
	public:
		Fraction(ll, ll);
		friend ostream& operator<<(ostream&, Fraction);
		friend istream& operator>>(istream&, Fraction&);

		ll get_tu() const;
		ll get_mau() const;

		void set_tu(ll);
		void set_mau(ll);

		void nghich_dao();
		void rut_gon();

		Fraction cong(Fraction& PhanSoKhac);
		Fraction tru(Fraction& PhanSoKhac);
		Fraction nhan(Fraction& PhanSoKhac);
		Fraction chia(Fraction& PhanSoKhac);
};


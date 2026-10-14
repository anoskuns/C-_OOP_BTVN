#pragma once
#include <iostream>
using namespace std;
#define ll long long


class Fraction {
	private:
		ll tu, mau;

	public:
		Fraction(ll, ll);

		friend ostream& operator<<(ostream&, Fraction);
		friend istream& operator>>(istream&, Fraction&);

		friend Fraction operator+(Fraction, Fraction);
		friend Fraction operator-(Fraction, Fraction);
		friend Fraction operator*(Fraction, Fraction);
		friend Fraction operator/(Fraction, Fraction);

		ll get_tu() const;
		ll get_mau() const;

		void set_tu(ll);
		void set_mau(ll);

		void nghichdao();
		void rutgon();


};
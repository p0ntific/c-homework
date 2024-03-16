// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

class Polynomial
{
	private:
		int deg;
		double *coeffs;
	public:
		Polynomial()
		{
			deg = 1;
			coeffs = new double[1];
			coeffs[0] = 0;
		}
		Polynomial(int n, double* arr)
		{
			deg = n;
			coeffs = new double[deg];
			for (int i = 0; i < deg; i++)
			{
				coeffs[i] = arr[i];
			}
		}
		double value(double x){
			double y = 0;
			for (int i = 0; i < deg; i++)
			{
				y += pow(x, i)*coeffs[i];
			}
			return y;
		}
		
		double & coef(int k){
			static double a = 0;
			if (k < 0 || k >= deg){
				return a;
			}
			return coeffs[k];
		}
		Polynomial operator+(Polynomial b){
			const int max_deg = max(b.deg, this->deg);
			double * new_coeffs = new double[max_deg]();

			for (int i = 0; i < max_deg; i++)
				new_coeffs[i] = this->coef(i) + b.coef(i);

			return Polynomial(max_deg, new_coeffs);
		}

		Polynomial operator-(Polynomial b){
			const int max_deg = max(b.deg, this->deg);
			double * new_coeffs = new double[max_deg]();

			for (int i = 0; i < max_deg; i++)
				new_coeffs[i] = this->coef(i) - b.coef(i);

			return Polynomial(max_deg, new_coeffs);
		}
		Polynomial operator*(Polynomial b){
			double * new_coeffs = new double[b.deg + this->deg -1 ]();

			for (int i = 0; i < b.deg; i++){
				for (int j = 0; j < this->deg; j++)
					new_coeffs[i+j] += this->coef(j) * b.coef(i);
			}
				

			return Polynomial(b.deg + this->deg -1, new_coeffs);
		}

		friend ostream & operator << (ostream &os, const Polynomial& p){
			for (int i = 0; i < p.deg; i++)
			{
				os << p.coeffs[i] << " ";
			}
			os << endl;
			return os;
		}

		friend istream & operator >> (istream &os,  Polynomial& p){
			os >> p.deg;
			p.coeffs = new double[p.deg];
			for (int i = 0; i < p.deg; i++)
			{
				os >> p.coeffs[i];
			}
			return os;
		}
		~Polynomial() {
			delete[] coeffs;
		}
};




int _tmain(int argc, _TCHAR* argv[])
{
	Polynomial p1;
	Polynomial p2;
	cin >> p1;
	cin >> p2;
	cout << p1;
	cout << p2;
	Polynomial p3 = p1*p2;
	cout << p3;
	system("pause");
	return 0;
}


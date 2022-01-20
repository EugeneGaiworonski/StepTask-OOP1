#pragma once
#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
struct frac {			// чтобы проще передавать/возвращать как параметр функции,
				// упакуем все в структуру
	int numerator; 		// числитель
	int denominator; }; //знаменатель


class Fraction {
	public:
		// 0/0
		Fraction();
		// a/b
		Fraction(int a, int b);
		//вывод fraction в поток
		friend std::ostream& operator<< (std::ostream&, Fraction);
		//ввод fraction из потока
		friend std::istream& operator>> (std::istream&, Fraction&);
		//сумма fraction + fraction
		friend Fraction operator+ (const Fraction&, Fraction);
		//разность fraction - fraction
		friend Fraction operator- (const Fraction&, Fraction);
		//умножение fraction * fraction
		friend Fraction operator* (const Fraction&, Fraction);
		//деление fraction / fraction
		friend Fraction operator/ (const Fraction&, Fraction);
		//унарный -
		Fraction operator- ();
		//унарный +
		Fraction operator+ ();
	private:
		frac value; };

#endif
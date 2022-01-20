#include "fraction.h"

Fraction::Fraction() {
	value.numerator = 0;
	value.denominator = 0; }
	
Fraction::Fraction(int num, int den) {
	value.numerator = num;
	value.denominator = den; }

std::ostream& operator<< (std::ostream &out, Fraction val) {
	out << val.value.numerator <<'/'<< val.value.denominator;
	return out; }

std::istream& operator>> (std::istream &in, Fraction &val) {
	// числитель и знаменатель вводим ч/з пробел
	std::cout << "_";// символ-посказка
	in >> val.value.numerator;
	in >> val.value.denominator;
	return in; }

Fraction operator+ (const Fraction &first, Fraction second) {
	Fraction result;
	// если знаменатели равны
	if (first.value.denominator == second.value.denominator) {
		result.value.numerator = first.value.numerator 
								+ second.value.numerator;
		result.value.denominator = first.value.denominator; }
	// если знаменатели !равны
	else {
		result.value.numerator = first.value.numerator
								* second.value.denominator
		                        + second.value.numerator
								* first.value.denominator;
		result.value.denominator = first.value.denominator
								* second.value.denominator; }
	return result; }
	
Fraction operator- (const Fraction &first, Fraction second) {
	Fraction result;
	// если знаменатели равны
	if (first.value.denominator == second.value.denominator) {
		result.value.numerator = first.value.numerator 
								- second.value.numerator;
		result.value.denominator = first.value.denominator; }
	// если знаменатели !равны
	else {
		result.value.numerator = first.value.numerator
								* second.value.denominator
		                        - second.value.numerator
								* first.value.denominator;
		result.value.denominator = first.value.denominator
								* second.value.denominator; }
	return result; }
	
Fraction operator* (const Fraction &first, Fraction second) {
	Fraction result;
	result.value.numerator = first.value.numerator 
								* second.value.numerator;
	result.value.denominator = first.value.denominator 
								* second.value.denominator;
	return result;
}

Fraction operator/ (const Fraction &first, Fraction second) {
	Fraction result;
	result.value.numerator = first.value.numerator 
								* second.value.denominator;
	result.value.denominator = first.value.denominator 
								* second.value.numerator;
	return result;
}

Fraction Fraction::operator- () {
	Fraction result;
	if (value.numerator > 0) result.value.numerator = -value.numerator;
	else result.value.numerator = value.numerator;
	result.value.denominator = value.denominator;
	return result;
}

Fraction Fraction::operator+ () {
	Fraction result;
	if (value.numerator < 0) result.value.numerator = -value.numerator;
	else result.value.numerator = value.numerator;
	result.value.denominator = value.denominator;
	return result;
}

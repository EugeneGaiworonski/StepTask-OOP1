/*
 Гайворонский Е. Г.
 СТ РПО ПВ121
 12.01.2022
 Задание.
 Реализуйте класс Дробь. Необходимо хранить числитель
 и знаменатель в качестве переменных-членов. Реализуйте
 функции-члены для ввода данных в переменные-члены,
 для выполнения арифметических операций (сложение,
 вычитание, умножение, деление, и т.д.).
*/

#include <iostream>
#include "fraction.h"
#include <windows.h>
#include <conio.h>

int main() {
	
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	/*
	if кракозябры: 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	*/
	Fraction  a(1,2),b(1,3),s;
	std::cout << "\tКласс Дробь - Fraction\n";
	std::cout << "\t======================\n";
	std::cout << "\ta=" << a << "\tb=" << b << "\ts=" << s << std::endl;
	std::cout << "\t-a=" << -a << "\t+b=" << +b <<"\n";
	std::cout << "\ta+b=" << a+b <<"\n";
	std::cout << "\ta-b=" << a-b <<"\n";
	std::cout << "\ta*b=" << a*b <<"\n";
	std::cout << "\ta/b=" << a/b <<"\n";
	s = a * a;
	std::cout << "\ts=a*a=" << s <<"\n";
	std::cout << "\tВведите s (числитель и знаменатель через пробел):";
	std::cin >> s;
	std::cout << "\ts=" << s << std::endl;
	s = s + a;
	std::cout << "\ts+a=" << s << std::endl;
	_getche();
	return 0; }

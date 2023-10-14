#include <iostream>
#include <cmath>
#include <Windows.h>//Windows.h нужен для того, что бы ты мог использовать в своей программе функционал, предоставляемый операционной системой (Windows 95, 98, NT, 2000, XP).


//using namespace std;//пространство имен

int main() {
	SetConsoleCP(1251);//кодировка для кириллицы 
	SetConsoleOutputCP(1251);
	std::cout << "Введите число a" << std::endl;
	double a;
	if (std::cin >> a) {
		std::cout << "a= " << a << std::endl;
	}
	else {
		std::cout << "error" << std::endl;
		return -1;// остановка 
	}

	std::cout << "Введите число b" << std::endl;
	double b;
		if (std::cin >> b) {
		std::cout << "b= " << b << std::endl;
	}
	else {
		std::cout << "error" << std::endl;
		return -1;// остановка 
	}

	double z1 = 1 - (pow(sin(2 * a), 2)) / 4 + cos(2 * a);
	double z2 = pow(cos(a), 2) + pow(cos(a), 4);
	std::cout << z1 << std::endl;
	std::cout << z2 << std::endl;
}


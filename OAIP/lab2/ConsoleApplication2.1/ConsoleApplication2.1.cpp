#include <iostream>
#include <cmath> 
#include <Windows.h>

int main() {
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	std::cout << "Введите число z" << std::endl;
		double z;
	if (std::cin >> z) {
		std::cout << "z= " << z << std::endl;
	}
	else
	{
		std::cout << "error" << std::endl;
		return -1;
	}
	double x;
	if (z > 0) {
		 	x = sqrt(z);
	}
	else {
		 x = ((3 * pow(z, 3) - 5));
	}
	double y;
	y = cos(5*x) + sin(x/5) + exp(x);
	std::cout << "y = " <<y <<  std::endl;
}
#include <iostream>
#include <cmath>
#include <Windows.h>


              


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, g;
	const double pi = 3.141592653589793;
	std::cout << " Введите x" <<std::endl;
	if (std::cin >> x) {
		std::cout << "x= " << x << std::endl;
	}
	else
	{
		std::cout << "error" << std::endl;
		return 0;
	}
	double y;
	std::cout << " Введите y" << std::endl;
	if (std::cin >> y) {
		std::cout << "y= " << y << std::endl;
			}
	else
	{
		std::cout << "error" << std::endl;
		return 0;
	}
	double z;
	std::cout << " Введите z" << std::endl;
	if (std::cin >> z) {
		std::cout << "z= " << z << std::endl;
	}
	else
	{
		std::cout << "error" << std::endl;
		return 0;
	}
	
	if ((x != -y) or (sin(z) != 0)) {
		g = (pow(y, (x + 1)) / ((pow(fabs(y - 2), 1 / 3) + 3))) + (((x + (y / 2)) / (2 * fabs(x + y))) * pow(x + 1, (-1 / sin(z))));
		std::cout << "g=" << g << std::endl;
	}
	else {
		std::cout << "ERROR";
	} 

	
}
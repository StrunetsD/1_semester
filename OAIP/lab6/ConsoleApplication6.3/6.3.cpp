#include <iostream>
#include <string.h>

using namespace std;



void func(char str[]) {
	int  counter = 0;
	for (int i = 0; i < 100; i++) {
		if (str[i] == ' ') {
			if (counter % 2 == 0) {
				str[i + 1] = '?';
			}
			counter++;
		}
	}
	puts(str);// выводит массив без цикла 
}


int main() {
	char string[100];
	gets_s(string);//замена cin ( ввод элементов массива)
	func(string);
}

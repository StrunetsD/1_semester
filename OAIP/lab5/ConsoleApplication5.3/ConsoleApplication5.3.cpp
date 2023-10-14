#include <iostream>
#include <cstdlib> // Для использования функции rand()
#include <ctime>
// i - rows
// j - cols 
int main() {
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    int n;
    std::cout << "Введите размерность матрицы: ";
    std::cin >> n;
    double proizv = 1;
    int sum = 0;
    int counter = 0;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    // Заполнение массива случайными числами
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 19 + 1; // Заполнение случайными числами от 1 до 20
        }
    }

    // Замена элементов выше главной и побочной диагоналей на 1
    for (int i = 0; i < n / 2; i++) {
        for (int j = 1 + i; j < n - 1 - i; j++) {
            arr[i][j] = 1;
        }

        counter++;
    }

    // Вывод результатов
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            proizv *= arr[i][j];
            sum += arr[i][j];
        }
    }

    std::cout << "proizv= " << proizv << std::endl;
    std::cout << "sum= " << sum - counter << std::endl;

    // Освобождение памяти
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

}
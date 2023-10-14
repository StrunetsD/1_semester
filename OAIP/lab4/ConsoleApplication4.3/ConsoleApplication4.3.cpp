#include <iostream>
#include <algorithm>// для использования функции sort
using namespace std;
int n;
pair <int,int>function(int n) { // Определение функции function, которая возвращает пару значений типа int. Функция принимает один аргумент n типа int.
    // Объявление указателя на массив размером n
    int* arr = new int[n]; // оператор new - выделение памяти под массив 
    // Цикл для ввода элементов массива
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Сортировка массива в порядке убывания
    sort(arr, arr + n, greater<int>());

    // Инициализация переменных
    int min_num = 199999999;
    int max_repeats = -1;
    int cur_num = arr[0];
    int repeats = 1;

    // Цикл для поиска наиболее часто повторяющегося элемента
    for (int i = 1; i < n; i++) {
        if (cur_num == arr[i]) {
            repeats++;
        }
        else {
            if (repeats > max_repeats) {
                max_repeats = repeats;
                min_num = cur_num;
            }
            else if (repeats == max_repeats) {
                min_num = min(min_num, cur_num);
            }

            cur_num = arr[i];
            repeats = 1;
        }
    }

    // Проверка последнего элемента
    if (repeats > max_repeats) {
        max_repeats = repeats;
        min_num = cur_num;
    }
    else if (repeats == max_repeats) {
        min_num = min(min_num, cur_num);
    }

    // Освобождение памяти, выделенной для массива arr. Используется оператор delete[].
    delete[] arr;
    // Возвращение пары значений
    return make_pair(min_num, max_repeats);
}


int main() {
    // Вывод строки
    cout << "Enter n: ";
    // Ввод значения n
    cin >> n;
    // Вызов функции и получение результата
    pair<int, int> result = function(n);
    // Вывод результата
    cout << "Minimum number: " << result.first << endl;
    cout << "Number of repeats: " << result.second << endl;
}
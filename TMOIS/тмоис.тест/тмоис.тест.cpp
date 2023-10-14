#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int c1, c2, c3;
    double element;
    const int x = 15;
    srand(time(NULL));

    cout << "Введите мощность множества А: ";
    cin >> c1;

    if (c1 > x || c1 < 0) {
        cout << "Некорректная мощность" << endl;
        return 0;
    }

    vector<double> a(c1);
    bool Sovpadinie;
    for (int i = 0; i < c1;)
    {
        Sovpadinie = false;
        double Newrandom = rand() % 100;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == Newrandom)
            {
                Sovpadinie = true;
                break;
            }
        }
        if (!Sovpadinie)
        {
            a[i] = Newrandom;
            i++;
        }
    }

    cout << "A={";
    for (int i = 0; i < c1; i++) {
        cout << a[i];
        if (i != c1 - 1) {
            cout << ", ";
        }
    }
    cout << "}\n";


    cout << "Введите мощность множества B: ";
    cin >> c2; // Пользователь вводит мощность множества B

    if (c2 > x || c2 < 0) {
        cout << "Некорректная мощность" << endl;
        return 0;
    }
    vector<double> b(c2);
    for (int i = 0; i < c2;)
    {
        Sovpadinie = false;
        double Newrandom = rand() % 100;
        for (int j = 0; j < i; j++)
        {
            if (b[j] == Newrandom)
            {
                Sovpadinie = true;
                break;
            }
        }
        if (!Sovpadinie)
        {
            b[i] = Newrandom;
            i++;
        }
    }

    cout << "B={";
    for (int i = 0; i < c2; i++) {
        cout << b[i];
        if (i != c2 - 1) {
            cout << ", ";
        }
    }
    cout << "}\n";

    vector<double> c; // Множество C для хранения пересечения

    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < c2; j++) {
            if (a[i] == b[j]) {
                c.push_back(a[i]);
                break;
            }
        }
    }

    c3 = c.size();
    cout << "C = {";
    for (int i = 0; i < c3 - 1; i++) {
        cout << c[i] << ", ";
    }
    if (c3 > 0) {
        cout << c[c3 - 1];
    }
    cout << "}" << endl;


}
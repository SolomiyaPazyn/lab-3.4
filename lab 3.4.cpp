// Lab_03_4.cpp
// <Ваше прізвище, ім’я>
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант <Ваш варіант>

#include <iostream>
#include <cmath> // Додано для використання функції pow
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідний параметр

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

	// розгалуження в повній формі
    if ((x >= -R && x <= 0 && y <= R && y >= 0 && y <= x + R) ||
        (x >= 0 && x < R && y >= 0 && y < R && x*x + y*y <= R*R) ||
        (x <= 0 && x >= -R && y <= 0 && y >= -R && x*x + y*y <= R*R))

				cout << "yes" << endl;
	else
				cout << "no" << endl;

	cin.get();
	return 0;
}




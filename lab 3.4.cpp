// Lab_03_4.cpp
// <���� �������, ���>
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ <��� ������>

#include <iostream>
#include <cmath> // ������ ��� ������������ ������� pow
using namespace std;

int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R; // ������� ��������

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

	// ������������ � ����� ����
    if ((x >= -R && x <= 0 && y <= R && y >= 0 && y <= x + R) ||
        (x >= 0 && x < R && y >= 0 && y < R && x*x + y*y <= R*R) ||
        (x <= 0 && x >= -R && y <= 0 && y >= -R && x*x + y*y <= R*R))

				cout << "yes" << endl;
	else
				cout << "no" << endl;

	cin.get();
	return 0;
}




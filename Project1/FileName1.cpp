#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int mounth;
	cout << "������� ���������� �������:";
	cin >> mounth;
	int year = mounth / 12;
	cout << "���������� ���:" << year;
	return 0;
}

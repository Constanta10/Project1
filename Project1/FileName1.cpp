#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int mounth;
	cout << "Введите количество месяцев:";
	cin >> mounth;
	int year = mounth / 12;
	cout << "Количество лет:" << year;
	return 0;
}

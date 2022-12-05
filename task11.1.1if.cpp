#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int day;

	cout << "Добро пожаловать в эту программу!" << endl;
	cout << "Она поможет вам узнать название дней недели на Украинском и Английском." << endl;
	cout << "Чтобы узнать название, выберите день недели (введите 1-7) : " ;
	cin >> day;

	if (day == 1) {
		cout << endl << "Понеділок, Monday" << endl;
	}
	else if (day == 2) {
		cout << endl << "Вівторок, Tuesday" << endl;
	}
	else if (day == 3) {
		cout << endl << "Середа, Wednesday " << endl;
	}
	else if (day == 4) {
		cout << endl << "Четверг, Thursday " << endl;
	}
	else if (day == 5) {
		cout << endl << "П'ятниця, Friday " << endl;
	}
	else if (day == 6) {
		cout << endl << "Субота, Saturday " << endl;
	}
	else if (day == 7) {
		cout << endl << "Неділя, Sunday " << endl;
	}
	else {
		cout << endl << "Ошибка ввода!" << endl;
	}

	return 0;
}
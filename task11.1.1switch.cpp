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
	cout << "Чтобы узнать название, выберите день недели (введите 1-7) : ";
	cin >> day;

	switch (day) {
	case 1:
		cout << endl << "Понеділок, Monday" << endl;
		break;
	case 2:
		cout << endl << "Вівторок, Tuesday" << endl;
		break;
	case 3:
		cout << endl << "Середа, Wednesday " << endl;
		break;
	case 4:
		cout << endl << "Четверг, Thursday " << endl;
		break;
	case 5:
		cout << endl << "П'ятниця, Friday " << endl;
		break;
	case 6:
		cout << endl << "Субота, Saturday " << endl;
		break;
	case 7:
		cout << endl << "Неділя, Sunday " << endl;
		break;
	default :
		cout << endl << "Ошибка ввода!" << endl;
		break;
}


	return 0;
}
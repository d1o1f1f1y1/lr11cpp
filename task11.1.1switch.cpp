#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int day;

	cout << "����� ���������� � ��� ���������!" << endl;
	cout << "��� ������� ��� ������ �������� ���� ������ �� ���������� � ����������." << endl;
	cout << "����� ������ ��������, �������� ���� ������ (������� 1-7) : ";
	cin >> day;

	switch (day) {
	case 1:
		cout << endl << "��������, Monday" << endl;
		break;
	case 2:
		cout << endl << "³������, Tuesday" << endl;
		break;
	case 3:
		cout << endl << "������, Wednesday " << endl;
		break;
	case 4:
		cout << endl << "�������, Thursday " << endl;
		break;
	case 5:
		cout << endl << "�'������, Friday " << endl;
		break;
	case 6:
		cout << endl << "������, Saturday " << endl;
		break;
	case 7:
		cout << endl << "�����, Sunday " << endl;
		break;
	default :
		cout << endl << "������ �����!" << endl;
		break;
}


	return 0;
}
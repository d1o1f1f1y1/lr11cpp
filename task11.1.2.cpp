#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");

	float x, y;

	cout << "������� �: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;

	float z = abs(x) + abs(y);

	if (y>=1 || y<=-1 || x>=1 || x<=-1 || z>=1) {
		cout << endl << "��������� ����� �������� � �������������� ������� �� �������" << endl;
	}
	else {
		cout << endl << "��������� ����� �� �������� � �������������� ������� �� �������" << endl;
	}

	return 0;
}
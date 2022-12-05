#include <iostream>

using namespace std;


int main() {

	setlocale(0, "");

	int arrLen, value;

	cout << "������� ������ ������� : ";
	cin >> arrLen;

	int* newArr = new int[arrLen];

	for (int i = 0; i < arrLen; i++) {
		cout << endl << "������� �������� ��� ������ ��� �������� " << i << " : ";
		cin >> value;
		newArr[i] = value;
	}

	int minNum = newArr[0];
	int numSum = 0;
	bool isZero = false;

	for (int i = 0; i < arrLen; i++) {
		if (abs(minNum) > abs(newArr[i])) {
			minNum = newArr[i];
		}
		if (isZero) {
			numSum += newArr[i];
		}
		if (newArr[i] == 0) {
			isZero = true;
		}
	}

	int* secondArr = new int[arrLen];
	int x, y;
	x = 0;
	y = ceil((double)arrLen / 2);

		for (int j = 0; j < arrLen; j++) {
			if (j % 2 == 0) {
				secondArr[x] = newArr[j];
				x++;
			}
			else {
				secondArr[y] = newArr[j];
				y ++;
			}
		}


	cout << " ����������� �� ������ ������� �������: " << minNum << endl;
	cout << " ����� ������� ��������� �������, ������������� ����� ������� ��������, ������� ���� : " << numSum << endl;
	cout << " ������ (������� ������ ������� ����� ��������) : ";
	
	for (int i = 0; i < arrLen; i++) {
		cout << secondArr[i] << "  ";
	}
	
	cout << endl;

	delete[] secondArr;
	delete[] newArr;

	return 0;
}


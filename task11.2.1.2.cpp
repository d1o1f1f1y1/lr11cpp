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

	int prev= 0;
	int counter =0;
	int* numArr = new int[arrLen];

	for (int i = 0; i < arrLen; i++) {
		if (newArr[i] == newArr[prev]) {
			counter++;
		}
		else {
			counter =1;
		}
		numArr[i] = counter;
		prev = i;
	}

	int max = numArr[0];

	for (int i = 0; i < arrLen; i++) {
		if (numArr[i] > max) {
			max = numArr[i];
		}
	}

	cout << "\n����� ������� ���������� ������ ����������� ���������� ��������� : " << max << endl;

	delete[] numArr;
	delete[] newArr;

	return 0;
}
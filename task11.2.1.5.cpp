#include <iostream>

using namespace std;


int main() {

	setlocale(0, "");

	int arrLen;
	double value;

	cout << "������� ������ ������� : ";
	cin >> arrLen;

	double* newArr = new double[arrLen];

	for (int i = 0; i < arrLen; i++) {
		cout << endl << "������� �������� ��� ������ ��� �������� " << i << " : ";
		cin >> value;
		newArr[i] = value;
	}

	cout << "������� ����� A: ";
	cin >> value;

	int counter, numSum;
	counter = numSum = 0;
	bool isTrue = false;

	for (int i = 0; i < arrLen; i++) {
		if (newArr[i] < value) {
			counter++;
		}
		if (isTrue) {
			numSum += newArr[i];
		}
		if (newArr[i] < 0) {
			if (isTrue) {
				numSum = 0;
			}
			else {
				isTrue = true;
			}
		}
	}
	
	cout << " ���������� ��������� �������, ������� ������ ����� A : " << counter << endl;
	cout << " ����� ����� ������ ��������� �������, ������������� ����� ���������� �������������� �������� : " << numSum << endl;

	delete[] newArr;

	return 0;
}


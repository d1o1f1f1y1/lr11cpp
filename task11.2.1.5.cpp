#include <iostream>

using namespace std;


int main() {

	setlocale(0, "");

	int arrLen;
	double value;

	cout << "¬ведите размер массива : ";
	cin >> arrLen;

	double* newArr = new double[arrLen];

	for (int i = 0; i < arrLen; i++) {
		cout << endl << "¬ведите значение дл€ €чейки под индексом " << i << " : ";
		cin >> value;
		newArr[i] = value;
	}

	cout << "¬ведите число A: ";
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
	
	cout << "  оличество элементов массива, которые меньше числа A : " << counter << endl;
	cout << " —умма целых частей элементов массива, расположенных после последнего отрицательного элемента : " << numSum << endl;

	delete[] newArr;

	return 0;
}


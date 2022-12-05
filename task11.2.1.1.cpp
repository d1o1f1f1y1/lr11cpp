#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");

	int arrLen,value;

	cout << "¬ведите размер массива : ";
	cin >> arrLen;

	int* newArr = new int[arrLen];    
	
	for (int i = 0; i < arrLen; i++) {
		cout << endl<< "¬ведите значение дл€ €чейки под индексом " << i << " : ";
		cin >> value;
		newArr[i] = value;
	}

	int max = newArr[0];
	int index = 0;

	for (int i = 1; i < arrLen; i++) {
		if (newArr[i] > max) {
			max = newArr[i];
			index = i;
		}
	}

	for (int i = 0; i < index; i++) {
		if (newArr[i] < 0) {
			newArr[i] = 0;
		}
	}

	for (int i = 0; i < arrLen; i++) {
		cout << endl << newArr[i] << endl;
	}

	delete[] newArr;

	return 0;
}
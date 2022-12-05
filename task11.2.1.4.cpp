#include <iostream>

using namespace std;


int main() {

	setlocale(0, "");

	int arrLen, value;

	cout << "Введите размер массива : ";
	cin >> arrLen;

	int* newArr = new int[arrLen];

	for (int i = 0; i < arrLen; i++) {
		cout << endl << "Введите значение для ячейки под индексом " << i << " : ";
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


	cout << " Минимальный по модулю элемент массива: " << minNum << endl;
	cout << " Сумма модулей элементов массива, расположенных после первого элемента, равного нулю : " << numSum << endl;
	cout << " Массив (сначала парные индексы потом нечетные) : ";
	
	for (int i = 0; i < arrLen; i++) {
		cout << secondArr[i] << "  ";
	}
	
	cout << endl;

	delete[] secondArr;
	delete[] newArr;

	return 0;
}


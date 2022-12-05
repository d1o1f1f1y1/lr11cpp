#include <iostream>

using namespace std;

int partition(double list[], int start, int pivot);
void quickSort(double list[], int start, int end);

int main() {

	setlocale(0, "");

	int arrLen;
	double value;

	cout << "Введите размер массива : ";
	cin >> arrLen;

	double* newArr = new double[arrLen];

	for (int i = 0; i < arrLen; i++) {
		cout << endl << "Введите значение для ячейки под индексом " << i << " : ";
		cin >> value;
		newArr[i] = value;
	}

	double maxVar, minVar, minSum, product, maxIndex, minIndex;
	maxVar = newArr[0];
	minVar = newArr[0];
	product = 1;
	maxIndex = minIndex = minSum  = 0;

	for (int i = 0; i < arrLen; i++) {
		if (newArr[i] < 0) {
			minSum += newArr[i];
		}
		if (newArr[i] > maxVar) {
			maxVar = newArr[i];
			maxIndex = i;
		}
		else if (newArr[i] < minVar) {
			minVar = newArr[i];
			minIndex = i;
		}
	}

	if (minIndex < maxIndex) {
		for (int i = minIndex + 1; i < maxIndex; i++) {
			product *= newArr[i];
		}
	}
	else if (minIndex > maxIndex) {
		for (int i = maxIndex+1; i < minIndex ; i++) {
			product *= newArr[i];
		}
	}
	else {
		product = newArr[0];
	}
	

	cout << endl <<  " Сумма отрицательных элементов массива : " << minSum << endl;
	cout <<  " Минимальное значение в массиве : " << minVar << endl;
	cout <<  " Максимальное значение в массиве : " << maxVar << endl;
	cout <<  " Произведение элементов массива, расположенных между максимальным и минимальным элементами : " << product << endl;
	cout << " Отсортированный массив : ";

	quickSort(newArr, 0, arrLen-1);

	for (int i = 0; i < arrLen; i++) {
		cout << newArr[i] << "  ";
	}

	cout << endl;
	
	delete[] newArr;

	return 0;
}

int partition(double list[], int start, int pivot)
{
	int i = start;
	while (i < pivot)
	{
		if (list[i] > list[pivot] && i == pivot - 1)
		{
			swap(list[i], list[pivot]);
			pivot--;
		}

		else if (list[i] > list[pivot])
		{
			swap(list[pivot - 1], list[pivot]);
			swap(list[i], list[pivot]);
			pivot--;
		}

		else i++;
	}
	return pivot;
}

void quickSort(double list[], int start, int end)
{
	if (start < end)
	{
		int pivot = partition(list, start, end);

		quickSort(list, start, pivot - 1);
		quickSort(list, pivot + 1, end);
	}
}
#include <iostream>

using namespace std;

int partition(double list[], int start, int pivot);
void quickSort(double list[], int start, int end);

int main() {

	setlocale(0, "");

	int arrLen;
	double value;

	cout << " ������� ������ ������� : ";
	cin >> arrLen;

	double* newArr = new double[arrLen];

	for (int i = 0; i < arrLen; i++) {
		cout << endl << " ������� �������� ��� ������ ��� �������� " << i << " : ";
		cin >> value;
		newArr[i] = value;
	}

	int counter = 0;
	double minNum = newArr[0];
	double minIndex = 0;
	double sumNum = 0;

	for (int i = 0; i < arrLen; i++) {
		if (abs(newArr[i]) < abs(minNum)) {
			minNum = newArr[i];
			minIndex = i;
		}
	}

	for (int i = minIndex+1; i < arrLen; i++) {
		sumNum += abs(newArr[i]);
	}

	for (int i = 0; i < arrLen; i++) {
		if (newArr[i] < 0) {
			counter++;
			newArr[i] = pow(newArr[i], 2);
		}
	}

	cout << endl << endl << " ���������� ������������� ��������� ������� : " << counter << endl;
	cout << endl << " ����������� �� ������ ������� : " << minNum << endl;
	cout << endl << " ����� ������� ��������� �������, ������������� ����� ������������ �� ������ �������� : " << sumNum << endl;
	cout << endl << " ���������� ������ : "  ;

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
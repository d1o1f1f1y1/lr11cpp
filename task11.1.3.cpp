#include <iostream>


using namespace std;

int funcSum(int x);

int main() {

	setlocale(0, "");

	int value;
	cout << "����� ����������!" << endl;
	cout << "�������� ������, ������� ������ ���������." << endl;
	cout << "������� ����� ������ (1-3) : ";
	cin >> value;

	if (value == 1)
	{
		int a, b, c;
		cout << "������� ����� �: ";
		cin >> a;

		cout << "������� ����� b: ";
		cin >> b;

		cout << "������� ����� c: ";
		cin >> c;

		if (a == b) {
			cout << "������������ ����!";
		}
		else if (a < b)
		{
			cout << endl << "����� �� ��������� �� " << a << " �� " << b << " - ������� ������� " << c << ": \n";
			for (int i = a; i <= b; i++) {
				if (i % c == 0) {
					cout << i << endl;
				}
			}
		}
		else if (a > b) 
		{
			cout <<endl<< "����� �� ���������  �� " << b << " �� " << a << ", ������� ������� " << c << ": \n";
			for (int i = b; i <= a; i++) {
				if (i % c == 0) {
					cout << i << endl;
				}
			}
		}

	}
	else if (value == 2)
	{

		cout << "������� �������� ����� : ";
		unsigned long long digit;
		cin >> digit;
		int i = 0;
		unsigned long long digitT = digit;
		int rest = 1;
		
		while (digitT >= 1 && rest <= 1)	
		{
			rest = digitT % 10;
			digitT = digitT / 10;
			i = i + 1;
		}
		int two = 1;
		unsigned long long sum = 0;
		digitT = digit;
		if (rest > 1)
		{
			
			cout << "��� �� �������� �����! \n";
		}
		else
		{
			
			while (i > 0)
			{
				rest = digitT % 10;
				digitT = digitT / 10;
				sum = sum + rest * two;
				two = two * 2;
				i = i - 1;
			}
			
			unsigned long long sum2 = sum;
			int counterOne = 0;
			int counterTwo = 0;

			while (sum2 > 0) {
				
					if (sum2 % 10 == 1) counterOne += 1;
					sum2 = sum2 / 10;
			}

			while (sum > 0) {

				if (sum % 10 == 2) counterTwo += 1;
				sum = sum / 10;
			}

			cout << "���������� ������ � ����� : " << counterOne << endl;
			cout << "���������� ����� � ����� : " << counterTwo << endl;

		}
		
	}
	else if (value == 3) 
	{
		long long counter = 1;
		for (int i = 1; i < 5; i++) {
			counter *= funcSum(i);
		}
		cout << "D: " << counter;
	}
	else 
	{
		cout << "������������ ����!";
	}

	return 0;
}


int funcSum(int x) {
	if (x <= 1) {
		return 1;
	}
	return x + funcSum(x - 1);
}


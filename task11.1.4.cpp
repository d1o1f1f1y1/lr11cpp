#include <iostream>

using namespace std;

double f6(double x);
double f7(double x);

void main() {

	setlocale(0,"");
	
	const int VARIANT = 1;

	double a = 0;

	for (int k = VARIANT; k <= VARIANT+5; k++) {
		a += f6(k);
	}

	double b = 0;

	for (int k = VARIANT; k <= VARIANT + 8; k++) {
		b += f7(k);
	}


	cout << "Номер варианта : " << VARIANT <<endl;
	cout << "A : " << a <<endl;
	cout << "B : " << b <<endl;
	cout << "Z : " << a+b <<endl;
}

double f6(double x) {
	return 2 * sin(x - 4.5) / (sin(4) - x);
};

double f7(double x) {
	return 3 * log(abs(x - 1.5)) / log10(abs(x-3.7)+8);
};

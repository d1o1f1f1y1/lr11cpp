#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");

	float x, y;

	cout << "¬ведите х: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;

	float z = abs(x) + abs(y);

	if (y>=1 || y<=-1 || x>=1 || x<=-1 || z>=1) {
		cout << endl << "¬веденна€ точка попадает в заштрихованную область на рисунке" << endl;
	}
	else {
		cout << endl << "¬веденна€ точка не попадает в заштрихованную область на рисунке" << endl;
	}

	return 0;
}
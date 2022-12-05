#include <random>
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution <int> dist(-50, 50);

    int arrLen;
    double value;

    cout << "Введите размер массива : ";
    cin >> arrLen;

    int* newArr = new int[arrLen];

    for (int i = 0; i < arrLen; i++) {
        newArr[i] = dist(eng);
    }


    int counter = 0;
    double prev = newArr[0];

    for (int i = 1; i < arrLen; i++) {
        if (newArr[i] == prev) {
            counter++;
        }
        prev = newArr[i];
      
    }

    cout << "Количество пар соседних элементов с одинаковыми значениями : " << counter;

    delete[] newArr;
    cout << endl;
}


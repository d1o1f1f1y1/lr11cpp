#include <random>
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution <int> dist(-50, 50);

    int height, width;

    cout << "Введите высоту матрицы : ";
    cin >> height;

    cout << "Введите ширину матрицы : ";
    cin >> width;

    cout << endl;

    if (height == width) {
        int** newArr = new int* [height];

        for (int i = 0; i < height; i++) {
            newArr[i] = new int[width];
        }


        for (int i = 0; i < height; i++) {

            for (int j = 0; j < width; j++) {
                newArr[i][j] = dist(eng);
            }
        }

        for (int i = 0; i < height; i++) {

            for (int j = 0; j < width; j++) {
                cout << newArr[i][j] << "\t";
            }
            cout << endl << endl;
        }

        long long value = 1;
        int x = 0;

        for (int i = 0; i < height; i++) {
            if (newArr[i][x] > 0) {
                value *= newArr[i][x];
           }
            x++;
        }

        cout << "Произведение положительных элементов квадратной матрицы, размещенных на ее главной диагонали : " << value;

        for (int i = 0; i < height; i++) {
            delete[] newArr[i];
        }

        delete[] newArr;
        cout << endl;
    }
    else {
        cout << "Некорректный ввод! Ширина и высота матрицы должны быть одинаковыми!" << endl;
    }
   
}


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

    cout << "¬ведите высоту матрицы : ";
    cin >> height;

    cout << "¬ведите ширину матрицы : ";
    cin >> width;

    cout << endl;

    int** newArr = new int* [height];

    for (int i = 0; i < height; i++) {
        newArr[i] = new int[width];
    }


    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            newArr[i][j] = dist(eng);
        }
    }
   
    int* minNumArr = new int [height];
    int* minIndexArr = new int[height];
    int minNum;
    int minIndex;

    for (int i = 0; i < height; i++) {
        minNum = newArr[i][0];
        minIndex = 0;
        for (int j = 0; j < width; j++) {
            if (minNum > newArr[i][j]) {
                minNum = newArr[i][j];
                minIndex = j;
            }
        }
        minNumArr[i] = minNum;
        minIndexArr[i] = minIndex;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << newArr[i][j] << "\t";
        }
        cout << "Minimal number " << minNumArr[i] << " | Index of this number " << minIndexArr[i] << endl << endl;
    }

    delete[] minNumArr;
    delete[] minIndexArr;

    for (int i = 0; i < height; i++) {
        delete[] newArr[i];
    }

    delete[] newArr;
    cout << endl;
}


#include <random>
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution <int> dist(-50, 50);

    int height,width;

    cout << "������� ������ ������� : ";
    cin >> height;

    cout << "������� ������ ������� : ";
    cin >> width;

    cout << endl;
    //first arr
    int** newArr = new int*[height];

    for (int i = 0; i < height; i++) {
        newArr[i] = new int[width];
    }


    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < width; j++) {
            newArr[i][j] = dist(eng);
        }
    }
    //second arr
    int** secondArr = new int* [width];

    for (int i = 0; i < width; i++) {
        secondArr[i] = new int[height];
    }
    
    int x = height-1;

    for (int i = 0; i < width; i++) {
        int x = height - 1;
        for (int j = 0; j < height; j++) {
            secondArr[i][j] = newArr[x][i];
            x--;
        }
    }
    // output
    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            cout << newArr[i][j] << "\t";
        }
        cout << endl << endl;
    }

    cout << endl << "������� ������� �� 90 �������� �� ������� �������." << endl << endl;


    for (int i = 0; i < width; i++) {

        for (int j = 0; j < height; j++) {
            cout << secondArr[i][j] << "\t";
        }
        cout << endl << endl;
    }
    // clear memory
    
    for (int i = 0; i < width; i++) {
        delete[] secondArr[i];
    }

    delete[] secondArr;

    for (int i = 0; i < height; i++) {
        delete[] newArr[i];
    }

    delete[] newArr;
    cout << endl;
}


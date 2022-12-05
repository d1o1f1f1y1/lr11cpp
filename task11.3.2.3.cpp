#include <random>
#include <iostream>

using namespace std;
void arrayInputFunc(int* arr[], int height, int width);
void arrayOutputFunc(int *arr[], int height, int width);
int numberNeighborElements(int* arr[], int height, int x, int y);

int main()
{
    setlocale(0, "");

    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution <int> dist(0, 1);

    int height, width;

    cout << "Введите высоту матрицы : ";
    cin >> height;

    cout << "Введите ширину матрицы : ";
    cin >> width;

    cout << endl;

    if (height == width) {
        cout << "Некорректный ввод! Высота и ширина матрицы не должны быть одинаковыми!" << endl;
    }
    else {
        int** newArr = new int* [height];

        for (int i = 0; i < height; i++) {
            newArr[i] = new int[width];
        }


        for (int i = 0; i < height; i++) {

            for (int j = 0; j < width; j++) {
                newArr[i][j] = dist(eng);
            }
        }

        arrayOutputFunc(newArr,height,width);

        
        cout << endl << "Количество соседних элементов, равных 1, у элемента (2;2) : " << numberNeighborElements(newArr,height,2,2) << endl << endl << endl;

        arrayInputFunc(newArr, height, width);
        arrayOutputFunc(newArr, height, width);
       

        for (int i = 0; i < height; i++) {
            delete[] newArr[i];
        }

        delete[] newArr;
        cout << endl;
    }
}
    

void arrayInputFunc(int* arr[], int height, int width) {
    int value;
    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            cout << "Введите значение для элемента матрицы с позицией (" << i << "," << j << ") : " ;
            cin >> value;
            arr[i][j] = value;
        }
        cout << endl << endl;
    }
}

void arrayOutputFunc(int* arr[], int height, int width) {
    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
}

int numberNeighborElements(int* arr[],int height,int x,int y) {

    bool isTrue = true;
    int lefty = y-1;
    int righty = y+1;
    int counter = 0;
    while (isTrue) {
        if (lefty < 0) {
            isTrue = false;
        }
        if (arr[x][lefty] == 1) {
            counter++;
            lefty--;
        }
        else {
            isTrue = false;
        }
    }
    isTrue = true;
    while (isTrue) {
        if (righty == height) {
            isTrue = false;
        }
        if (arr[x][righty] == 1) {
            counter++;
            righty++;
        }
        else {
            isTrue = false;
        }
    }
    return counter;
}
#include<iostream>
#include<map>

using namespace std;

int n = 7;

int main() {
    float input[7][7] = { {0.9,   0,   0, 0.9,  0,   0, 0.1},
                         {  0, 0.3,   0,   0,   0,   0, 0.2},
                         {  0, 0.2, 0.9, 0.1,   0,   0,   0},
                         {0.1, 0.2, 0.1,   0,   0,   0, 0.1},
                         {  0,   0,   0,   0, 0.9, 0.8, 0.1},
                         {  0,   0,   0,   0, 0.1, 0.2,   0},
                         {  0, 0.3,   0,   0,   0,   0, 0.5} };

    float el = 0;
    int n = 7;

    int exc[7]{};

    //Заполнение массива
    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> el;
            input[i][j] == el;
            el = 0;
        }
    }*/


    //Проход по заполненной матрице
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //Если нашел страну для торгов, исключая саму себя
            if (i != j && input[i][j] != 0) {
                //Проверить ее на наличие в исключениях
                check_exception(exc, j);
            }
        }
    }
}

bool check_exception(int *exc[7], int exc_item) {
    if (exc[exc_item] != 0) {
        return true;
    }
    else exc[exc_item] == 0;
    return false;
}

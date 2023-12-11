﻿#include<iostream>
#include<map>

using namespace std;

int n = 7;
int k = 0;

void creatASet(int i, int input[7][7], int *clone_arr[7], int exc[7]) {
    for (int j = 0; j < n; j++) {
        if(input[i, j] != 0 && i != j) {
            if (exc[j] == 0){
                exc[j] = 1;
                *clone_arr[k] = j;
                k++;
                creatASet(j, input, clone_arr, exc);
            }
        }
    }
}

int main() {
    int input[7][7] = { {9, 0, 0, 9, 0, 0, 1},
                        {0, 3, 0, 0, 0, 0, 2},
                        {0, 2, 9, 1, 0, 0, 0},
                        {1, 2, 1, 0, 0, 0, 1},
                        {0, 0, 0, 0, 9, 8, 1},
                        {0, 0, 0, 0, 1, 2, 0},
                        {0, 3, 0, 0, 0, 0, 5}
    };

    int arr[7] = {};
    int *clone_arr[7] = {};

    for (int i = 0; i < n; i++) {
        clone_arr[i] = &arr[i];
        for (int j = i+1; j < n; j++) {
            int temp = 0;
            temp = input[i][j];
            input[i][j] = input[j][i];
            input[j][i] = temp;
        }
    }

    int exc[7]{};
    int k = 0;

    for (int i = 0; i < n; i++) {
        k++;
        for (int j = 0; j < n; j++) {
            //Если нашел страну для торгов, не включая саму себя
            if (i != j && input[i][j] != 0) {
                //Проверить ее на наличие в исключениях
                if (exc[j] == 0) {
                    exc[i] = 1;
                    creatASet(j, input, clone_arr, exc);
                    k = 0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

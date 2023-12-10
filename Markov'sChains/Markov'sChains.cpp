#include<iostream>
#include<map>

using namespace std;

int n = 7;

int func(int i, int input[7][7]) {
    for (int j = 0; j < n; j++) {
        if(input[i, j] != 0 && i != j) {
            return j+1;
        }
    }
    return 0;
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

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = 0;
            temp = input[i][j];
            input[i][j] = input[j][i];
            input[j][i] = temp;
        }
    }

    int exc[7]{};

    map<int, int(*)[7]> s;

    int test[7] = {};
    int k = 0;
    for (int i = 0; i < n; i++) {
        k++;
        for (int j = 0; j < n; j++) {
            //Если нашел страну для торгов, не включая саму себя
            if (i != j && input[i][j] != 0) {
                //Проверить ее на наличие в исключениях
                if (exc[j] == 0) {
                    exc[i] = 1;
                    int temp = func(j, input);
                    if (temp != 0)
                        test[k] = temp;
                }
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        cout << test[i] << " ";
    }
}

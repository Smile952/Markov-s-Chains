#include<iostream>
#include<map>

using namespace std;

<<<<<<< HEAD
int n = 7;
int k = 0;

void creatASet(int i, int input[7][7], int *clone_arr[49], int exc[7]) {
    for (int j = 0; j < n; j++) {
        if(input[i][j] != 0 && i != j) {
            if (exc[j] == 0){
                exc[j] = 1;
                *clone_arr[k] = j+1;
                k++;
                creatASet(j, input, clone_arr, exc);
=======
int check(float input[7][7], int i) {

    for (int j = 0; j < 7; j++) {
        if (input[i][j] != 0 && i != j) {
            return j;
        }
    }

    return 0;
}

int main() {
    float input[7][7] = {
        {0.9, 0.0, 0.0, 0.9, 0.0, 0.0, 0.1},
        {0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 0.2},
        {0.0, 0.2, 0.9, 0.1, 0.0, 0.0, 0.0},
        {0.1, 0.2, 0.1, 0.0, 0.0, 0.0, 0.1},
        {0.0, 0.0, 0.0, 0.0, 0.9, 0.8, 0.1},
        {0.0, 0.0, 0.0, 0.0, 0.1, 0.2, 0.0},
        {0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 0.5}
    };

    // Проверка условия: "Сумма чисел в каждом столбце не должна превышать единицу."
    //===============================================================================================
    bool fl = true;

    for (int i = 0; i < 7; i++) {

        float sum = 0;

        for (int j = 0; j < 7; j++) {
            sum += input[j][i];
        }

        (sum > 1) ? fl = false : fl;
    }

    if (fl)
        cout << "Сумма чисел в каждом столбце не превышает единицу." << endl;
    else
        cout << "Сумма чисел в одном или нескольких столбцах превышает единицу." << endl;
    //==============================================================================================

    
    float el = 0;
    int n = 7;

    int temp[7] = {};
    map<int, int[]> s = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> el;
            input[i][j] == el;
            el = 0;
        }
    }

    int k = 0; int l = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (input[i][j] != 0 && i != j) {
                s[l[k++]] = check(input, i); // Здесь хотел исправить, но я не работал с "map",
                                             // поэтому не знаю, что здесь не так.
>>>>>>> d14ab49d445bdef46bdaad0e41116d1828a31949
            }
        }
    }
}
<<<<<<< HEAD

int main() {
    int input[7][7] = { {2, 0, 0, 0, 0, 0, 1},
                        {0, 5, 0, 9, 3, 0, 0},
                        {2, 0, 5, 0, 2, 4, 0},
                        {0, 5, 0, 1, 0, 0, 4},
                        {0, 0, 0, 0, 2, 0, 2},
                        {6, 0, 5, 0, 2, 6, 1},
                        {0, 0, 0, 0, 1, 0, 2}
    };
    int exc[7]{};
    int arr[7] = {};
    int* clone_arr[7] = {};
    for (int i = 0; i < n; i++) {
        clone_arr[i] = &arr[i];
        exc[i] = 0;
    }
   
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            temp = input[i][j];
            input[i][j] = input[j][i];
            input[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //Если нашел страну для торгов, не включая саму себя
            if (input[i][j] != 0) {
                //Проверить ее на наличие в исключениях
                if (exc[j] == 0) {
                    exc[j] = 1;
                    *clone_arr[k] = j+1;
                    k++;
                    creatASet(j, input, clone_arr, exc);
                    
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            temp = input[i][j];
            input[i][j] = input[j][i];
            input[j][i] = temp;
        }
    }

    int kanon[7][7] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            kanon[i][j] = input[arr[i]-1][arr[j]-1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << input[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;cout << endl;cout << endl;cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << kanon[i][j] << " ";
        }
        cout << endl;
    }
}
=======
>>>>>>> d14ab49d445bdef46bdaad0e41116d1828a31949

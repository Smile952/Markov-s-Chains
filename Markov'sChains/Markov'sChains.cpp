#include<iostream>
#include<map>

using namespace std;

int main() {
    float input[7][7] = { {0.9,   0,   0, 0.9,   0,   0, 0.1},
                         {  0, 0.3,   0,   0,   0,   0, 0.2},
                         {  0, 0.2, 0.9, 0.1,   0,   0,   0},
                         {0.1, 0.2, 0.1,   0,   0,   0, 0.1},
                         {  0,   0,   0,   0, 0.9, 0.8, 0.1},
                         {  0,   0,   0,   0, 0.1, 0.2,   0},
                         {  0, 0.3,   0,   0,   0,   0, 0.5} };

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
                s[l[k++]] = check(input, i);
            }
        }
        l++;
    }

    for (const auto& elem : s) {
        cout << elem.first;
        for (int i = 0; i < n; i++) {
            cout << elem.second[i];
        }
    }
}

int check(float *input[7][7], int i) {
    for (int j = 0; j < 7; j++) {
        if (input[i][j] != 0 && i != j) {
            return j;
        }
    }
    return 0;
}

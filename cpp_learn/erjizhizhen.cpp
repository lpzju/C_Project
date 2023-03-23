/**
 * Created by lpzju on 2023/3/14 18:17
 */
//#include <stdio.h>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iterator>
#include <stack>

using namespace std;

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    int col = 3;
    int row = 2;
    int **arr = (int **) malloc (sizeof(int *) * row);
    for (int i = 0; i < col; i++) {
        arr[i] = (int *) malloc (sizeof(int) * col);
    }
    int total = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = total++;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}
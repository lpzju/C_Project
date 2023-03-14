/**
 * Created by lpzju on 2023/3/13 18:51
 */

#include <stdio.h>

void func1(int a[][4], int row, int col) {
    int num = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            a[i][j] = num++;
        }
    }
}

void func2(int a[][4], int row, int col) {
    int num = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d,",a[i][j]);
        }
        printf("\n");
    }
}

void func3(int **a) {
    printf("%d\n",**a);
}

int main() {
//    cout << "Let's start to solve a new problem" << endl;
    int row = 3;
    int col = 4;
    int arr[3][4];
    func1(arr,row,col);
    func2(arr,row,col);
    func3(arr);
    return 0;
}
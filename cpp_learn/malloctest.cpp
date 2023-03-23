/**
 * Created by lpzju on 2023/3/14 15:55
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
    int *p = (int *) malloc (4 * sizeof(int));
    p[0] = 1;p[1] = 2;p[2] = 3;p[3] = 4;
    int **arr = &p;
    cout << *arr << endl;
    cout << p << endl;
    cout << *arr + 1 << endl;
    cout << p+1 << endl;
    return 0;
}
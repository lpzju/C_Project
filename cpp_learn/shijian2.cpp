/**
 * Created by lpzju on 2023/3/15 13:04
 */
//#include <stdio.h>
#include <iostream>
#include <ctime>
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
    time_t seconds = time(0);
    char *t = ctime(&seconds);
    cout << t << endl;
    struct tm *t1 = localtime(&seconds);
    cout << t1->tm_hour << t1->tm_min << t1->tm_sec << endl;
    clock_t start, end;
    start = clock();
    // 程序
    end = clock();
    cout << end - start << endl;
    return 0;
}
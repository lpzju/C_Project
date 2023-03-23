/**
 * Created by lpzju on 2023/3/15 12:04
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
    // time_t
    time_t seconds = time(0);
    cout << seconds / 3600 << endl;
    // ctime
    // char *ctime(const time_t *timer)
    char *ct = ctime(&seconds);
    cout << ct << endl;
    // localtime
    // struct tm *localtime(const time_t *timer)
    struct tm *local = localtime(&seconds);
    cout << local->tm_hour << "," << local->tm_min << "," << local->tm_sec << endl;
    // clock
    // clock_t clock(void) CLOCKS_PER_SEC
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            for (int k = 0; k < 30; k++) {
                int temp = j;
            }
        }
    }
    end = clock();
    cout << (end - start) / CLOCKS_PER_SEC << endl;
    // char *asctime(const struct tm *timeptr)
    char *str = asctime(local);
    cout << str << endl;
    return 0;
}
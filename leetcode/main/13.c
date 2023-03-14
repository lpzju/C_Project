/**
 * Created by lpzju on 2023/3/12 16:41
 */

#include <stdio.h>

int romanToInt(char * s){
    int total = 0;
    while (*s != '\0') {
        if (*s == 'I') {
            char *temp = s+1;
            if (*temp != '\0') {
                if (*temp == 'V') {
                    total += 4;
                    s += 2;
                } else if (*temp == 'X') {
                    total += 9;
                    s += 2;
                } else {
                    total += 1;
                    s++;
                }
            } else {
                total += 1;
                s++;
            }
        } else if (*s == 'X') {
            char *temp = s+1;
            if (*temp != '\0') {
                if (*temp == 'L') {
                    total += 40;
                    s += 2;
                } else if (*temp == 'C') {
                    total += 90;
                    s += 2;
                } else {
                    total += 10;
                    s++;
                }
            } else {
                total += 10;
                s++;
            }
        } else if (*s == 'C') {
            char *temp = s+1;
            if (*temp != '\0') {
                if (*temp == 'D') {
                    total += 400;
                    s += 2;
                } else if (*temp == 'M') {
                    total += 900;
                    s += 2;
                } else {
                    total += 100;
                    s++;
                }
            } else {
                total += 100;
                s++;
            }
        } else if (*s == 'V') {
            total += 5;
            s++;
        } else if (*s == 'L') {
            total += 50;
            s++;
        } else if (*s == 'D') {
            total += 500;
            s++;
        } else {
            total += 1000;
            s++;
        }
    }
    return total;
}

int main() {
    char *arr = "III";
    printf("%d\n", romanToInt(arr));
    return 0;
}
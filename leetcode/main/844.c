#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool backspaceCompare(char * s, char * t){
    char s1[300];
    char t1[300];
    int i = 0;
    int j = 0;
    while (*s != '\0') {
        if (*s == '#') {
            if (i != 0) {
                i--;
            }
            s++;
        } else {
            s1[i++] = *s++;
        }
    }
    s1[i] = '\0';
    while (*t != '\0') {
        if (*t == '#') {
            if (j != 0) {
                j--;
            }
            t++;
        } else {
            t1[j++] = *t++;
        }
    }
    t1[j] = '\0';
    if (strcmp(s1,t1) == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    bool f1 = backspaceCompare("hello","world");
    printf("%d\n",f1);
    return 0;
}

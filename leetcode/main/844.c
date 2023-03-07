#include <stdio.h>
#include <stdbool.h>

bool backspaceCompare(char * s, char * t) {
    bool flag = true;
    int i = 0;
    int j = 0;
    printf("%d",s[4] == '\0');
    return flag;
}

int main() {
    bool f1 = backspaceCompare("hello","world");
    printf("%d\n",f1);
    return 0;
}

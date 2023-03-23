/**
 * Created by lpzju on 2023/3/20 9:48
 */
#include <stdio.h>

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
    FILE *fp;
    fp = fopen("hello1.txt","r");
    int ch;
    while (1) {
        ch = getc(fp);
        if (feof(fp)) {
            break;
        }
        putchar(ch);
    }
     printf("Let's start to solve a new problem!\n");
    return 0;
}
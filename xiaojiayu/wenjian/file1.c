/**
 * Created by lpzju on 2023/3/19 16:32
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
     printf("Let's start to solve a new problem!\n");
    FILE *fp;
    int ch;
    if ((fp = fopen("hello1.txt","r")) == NULL) {
        printf("shibai\n");
        exit(EXIT_FAILURE);
    } else {
        printf("wenjian dakai\n");
        while ((ch = getc(fp)) != EOF) {
            putchar(ch);
        }
    }
    time_t t = time(NULL);
    printf("\n%d\n",t/3600);
    srand(1);
    for (int i = 0; i < 10; i++) {
        printf("%d\n",rand()%100);
    }
    return 0;
}
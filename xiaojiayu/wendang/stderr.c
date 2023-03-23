/**
 * Created by lpzju on 2023/3/20 10:14
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
//    cout << "Let's start to solve a new problem!" << endl;
     printf("Let's start to solve a new problem!\n");
    FILE *fp;
    if ((fp = fopen("wewe.txt","r")) == NULL) {
//        fputs("wrong",stdout);
        fputs("wrong",stderr);
        exit(EXIT_FAILURE);
    }
     return 0;
}
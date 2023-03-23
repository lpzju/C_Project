/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
    FILE *fp;
    // fopen
    fp = fopen("test1.txt","w");
    fputs("hello",fp);
    fclose(fp);
    if ((fp = fopen("./file.txt","r")) != NULL) {
        printf("dakaichenggong\n");
        // fclose
        fclose(fp);
    } else {
        printf("dakaishibai\n");
    }
    // fgetc
    // getc
    fp = fopen("hello1.txt","r");
    int ch;
//    while ((ch = fgetc(fp)) != EOF) {
//        putchar(ch);
//    }
//    while ((ch = getc(fp)) != EOF) {
//        putchar(ch);
//    }
    // fgets
    char temp[1024];
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    fgets(temp,1024,fp);
    printf("%s\n",temp);
    return 0;
}
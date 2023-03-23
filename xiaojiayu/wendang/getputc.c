/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
    // 将hello1.txt文件中的内容写入到新文件
    FILE *fp1;
    if ((fp1 = fopen("hello1.txt","r")) != NULL) {
        printf("open success!\n");
    } else {
        printf("open failure\n");
        exit(EXIT_FAILURE);
    }
    int ch;
    FILE *fp2;
    if ((fp2 = fopen("hello2.txt","w")) != NULL) {
        printf("open success!\n");
    } else {
        printf("open failure\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch,fp2);
    }
    fclose(fp2);
    fclose(fp1);
    return 0;
}
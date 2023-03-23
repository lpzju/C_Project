/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 使用fprintf和fscanf
    // 获取当前时间，写入文件，再读取出来
//    time_t t;
//    time(&t);
//    struct tm *tt = localtime(&t);
//    printf("%d %d %d\n",1900+tt->tm_year,1+tt->tm_mon,tt->tm_mday);
    FILE *fp;
//    if ((fp = fopen("fprintf1.txt","w")) == NULL) {
//        printf("shibai\n");
//        exit(EXIT_FAILURE);
//    }
//    fprintf(fp,"%d-%d-%d\n",1900+tt->tm_year,1+tt->tm_mon,tt->tm_mday);
//    fprintf(fp,"%s\n","still studying");
//    fclose(fp);
    if ((fp = fopen("fprintf1.txt","r")) == NULL) {
        printf("shibai\n");
        exit(EXIT_FAILURE);
    }
    char *str;
    int temp;
    while ((temp = fscanf(fp,"%s",str)) == 1) {
        printf("%s\n",str);
    }
    return 0;
}
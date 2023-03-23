/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // fread and fwrite
    // 用一个结构体存储数据，然后写入文档中，但是是fwrite的二进制形式，然后再用fread读取
    typedef struct _book {
        char name[40];
        char price[40];
    }Book, *Book_tr;
    Book_tr bookTr;
    Book_tr bookTr2;
    FILE *fp;
    if ((fp = fopen("fwrite1.txt","w")) == NULL) {
        printf("error\n");
        exit(EXIT_FAILURE);
    }
    bookTr = (Book_tr) malloc (sizeof(Book));
    bookTr2 = (Book_tr) malloc (sizeof(Book));
    strcpy(bookTr->name,"C programming!");
    strcpy(bookTr->price,"50");
    fwrite(bookTr,sizeof(Book),1,fp);
    fclose(fp);
    if ((fp = fopen("fwrite1.txt","r")) == NULL) {
        printf("error\n");
        exit(EXIT_FAILURE);
    }
    // 使用fread
    fread(bookTr2, sizeof(Book),1,fp);
    printf("%s %s\n",bookTr2->name,bookTr2->price);
    return 0;
}
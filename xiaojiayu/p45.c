#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[128];
    char author[40];
    struct Book *next;
};

void getInput(struct Book *book){
    printf("请输入书名：");
    scanf("%s", book -> title);
    printf("请输入作者：");
    scanf("%s", book -> author);
}

void printBook(struct Book *library){
    struct Book *book;
    int count = 1;
    book = library;
    while (book != NULL) {
        printf("Book%d：",count);
        printf("书名：%s\n",book -> title);
        printf("作者：%s\n",book -> author);
        book = book -> next;
        count++;
    }
}

void addBook(struct Book **library){
    struct Book *book, *temp;

    book = (struct Book *) malloc (sizeof(struct Book));
    if(book == NULL){
        printf("内存分配失败!\n");
        exit(1);
    }
    getInput(book);
    if(*library != NULL){
        temp = *library;
        *library = book;
        book -> next = temp;
    }else{
        *library = book;
        book -> next = NULL;
    }
}

int main(){
    struct Book *library = NULL;
    addBook(&library);
    printBook(library);
    return 0;
}

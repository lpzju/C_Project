#include <stdio.h>
#include <stdlib.h>

// 单链表，尾插法，实现函数封装
// 注意指针变量赋值，在函数中是没有用的
// 要使用指针的地址，这样这个指针变量改变才会生效

// 链表，链表存储着一个值和一个指针，这个指针指向下一个链表
typedef struct _node {
    int value;
    struct _node *next;
} Node;

// 这个list暂时存放着链表的头指针，后面还可以存放链表的尾指针等等
typedef struct _list {
    Node *pHead;
} List;

void add(List *, int);
void print(List *);

int main(){
    // 输入数字，直到输入-1结束
    int number;
    // 初始化list，创建头结点
    List pList;
    pList.pHead = NULL;
    do {
        printf("请输入一个数，直到输入-1结束:\n");
        scanf("%d",&number);
        if (number != -1) {
            add(&pList,number);
        }
    } while(number != -1);
    printf("现在开始打印：\n");
    print(&pList);
    return 0;
}

void add(List *pList, int number){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *last = pList -> pHead;
    if (last) {
        while(last -> next){
            last = last -> next;
        }
        last -> next = p;
    }else{
        pList -> pHead = p;
    }
}

void print(List *pList){
    Node *last = pList -> pHead;
    while (last -> next) {
        printf("%d,",last -> value);
        last = last -> next;
    }
    printf("%d,",last -> value);
}

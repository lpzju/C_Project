#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

void add(Node **head, int number);

int main(){
    // 链表，实现函数的第一种办法
    // 输入一个数，直到输入-1停止
    Node *head = NULL;
    int number;
    do {
        printf("请输入一个数，直到输入-1停止:\n");
        scanf("%d",&number);
        if (number != -1) {
            add(&head,number);
        }
    } while(number != -1);
    Node *temp = head;
    int i = 1;
    while(temp -> next){
        printf("正在输出第%d个数：%d\n",i,temp -> value);
        temp = temp -> next;
        i++;
    }
    printf("正在输出第%d个数：%d\n",i,temp -> value);
    return 0;
}

void add(Node **head, int number){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *last = *head;
    if (*head) {
        while(last -> next){
            last = last -> next;
        }
        last -> next = p;
    }else{
        *head = p;
    }
}

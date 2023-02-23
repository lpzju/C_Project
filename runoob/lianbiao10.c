#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

void add(Node **pHead,int number){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *last = *pHead;
    if (last) {
        while (last -> next) {
            last = last -> next;
        }
        last -> next = p;
    }else{
        *pHead = p;
    }
}

int main(){
    // 链表函数，输入直到-1停止
    Node *head = NULL;
    int number;
    do {
        scanf("%d",&number);
        if (number != -1) {
            add(&head,number);
        }
    } while(number != -1);
    Node *temp = head;
    while(temp -> next){
        printf("%d\n",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
    return 0;
}

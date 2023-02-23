#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

void add(Node **pHead,int number);

int main(){
    // 链表，函数，输入直到-1为之
    Node *head = NULL;
    int number;
    do {            
        scanf("%d",&number);
        if (number != -1) {
            // Node *p = (Node *) malloc (sizeof(Node));
            // p -> value = number;
            // p -> next = NULL;
            // Node *last = head;
            // if (last) {
            //     while (last -> next) {
            //         last = last -> next;
            //     }
            //     last -> next = p;
            // }else {
            //     head = p;
            // }
            add(&head,number);
        }
    } while(number != -1);
    Node *temp = head;
    while (temp -> next) {
        printf("%d\n",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
}

void add(Node **pHead, int number){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *last = *pHead;
    if (last) {
        while(last -> next){
            last = last -> next;
        }
        last -> next = p;
    }else{
        *pHead = p;
    }
}

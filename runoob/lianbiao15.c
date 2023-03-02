#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

void addNode(Node **pHead, int number) {
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *tail = *pHead;
    if (tail) {
        while (tail -> next) {
            tail = tail -> next;
        }
        tail -> next = p;
    } else {
        *pHead = p;
    }
}

void printNode(Node *pHead) {
    Node *temp = pHead;
    while (temp -> next) {
        printf("%d, ",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
}

int main(){
    int number;
    Node *head;
    head = NULL;
    printf("请输入数字，直到-1停止:\n");
    do {
        if (number != -1) {
            scanf("%d",&number);
            addNode(&head, number);
        }
    } while(number != -1);
    // 打印
    printNode(head);
    return 0;
}



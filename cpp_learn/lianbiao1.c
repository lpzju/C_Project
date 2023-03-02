#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

void addNode(Node **head,int number);
void printNode(Node *head);

int main(){
    Node *head = NULL;
    int number;
    do {
        scanf("%d",&number);
        if (number != -1) {
            addNode(&head,number);
        }
    } while(number != -1);
    printNode(head);
    return 0;
}

void addNode(Node **head, int number) {
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *last = *head;
    if (last) {
        while (last -> next) {
            last = last -> next;
        }
        last -> next = p;
    } else {
        *head = p;
    }
}

void printNode(Node *head) {
    Node *temp = head;
    while (temp -> next) {
        printf("%d,",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
}

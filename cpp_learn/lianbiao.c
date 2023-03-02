#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

void addNode(Node **head, int value){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = value;
    p -> next = NULL;
    Node *tail = *head;
    if (*head) {
        while(tail -> next) {
            tail = tail -> next;
        }
        tail -> next = p;
    } else {
        *head = p;
    }
}

int main(){
    Node *head = NULL;
    int number;
    do {
        scanf("%d",&number);
        if (number != -1) {
            addNode(&head,number);
        }
    } while(number != -1);
    Node *temp = head;
    while(temp -> next) {
        printf("%d,",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
    return 0;

}

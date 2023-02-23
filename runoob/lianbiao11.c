#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list {
    Node *pHead;
} List;

void add(List *list,int number){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *last = list -> pHead;
    if (last) {
        while(last -> next){
            last = last -> next;
        }
        last -> next = p;
    }else{
        list -> pHead = p;
    }
}

int main(){
    // 链表，函数，输入直到-1为之
    // 且额外使用一个struct存储头指针
    int number;
    List list;
    list.pHead = NULL;
    do {    
        scanf("%d",&number);
        if (number != -1) {
            add(&list,number);
        }
    } while(number != -1);
    Node *temp = NULL;
    temp = list.pHead;
    while(temp -> next){
        printf("%d\n",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
    return 0;
}


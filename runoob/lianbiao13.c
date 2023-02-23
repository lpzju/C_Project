#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list {
    Node *head;
} List;

void add(List *,int);
void print(List *list);

int main(){
    List list;
    list.head = NULL;
    int number;
    char ch;
    do {
        printf("请输入一个数字，输入-1表示结束:\n");
        scanf("%d",&number);
        if (number != -1) {
            add(&list,number);
        }
    } while(number != -1);
    print(&list);
    return 0;
}

void add(List *list, int number){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *last = list -> head;
    if (last) {
        while (last -> next) {
            last = last -> next;
        }
        last -> next = p;
    }else {
        list -> head = p;
    }
}

void print(List *list){
    Node *temp = list -> head;
    while (temp -> next) {
        printf("%d ",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
}

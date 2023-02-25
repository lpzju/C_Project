#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list {
    Node *head;
    Node *tail;
} List;

void add(List *list, int number);

void print(List list);

int main(){
    // 实现按顺序插入的单链表
    // 存储头指针和尾指针
    List list;
    list.head = NULL;
    list.tail = NULL;
    int number;
    printf("请输入数字，直到-1停止\n");
    // Node test;
    // test.value = 1;
    // test.next = NULL;
    // Node *tmp;
    // tmp = &test;
    // printf("%d\n",tmp -> value);
    do {
        scanf("%d",&number);
        if (number  != -1) {
            add(&list, number);
        }
    } while(number != -1);
    print(list);
    return 0;
}

void add(List *list, int number){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = number;
    p -> next = NULL;
    Node *tmp = list -> head;
    Node *before = NULL;
    if (tmp) {
        if ((list -> tail) -> value < number) {
            (list -> tail) -> next = p;
            list -> tail = p;
        } else {
            if ((list -> head) -> value > number) {
                p -> next = list -> head;
                list -> head = p;
            }else{
                while ((tmp -> value) < number) {
                    before = tmp;
                    tmp = tmp -> next;
                    // printf("before :%d\n",before -> value);
                    // printf("tmp :%d\n",tmp -> value);
                }
                p -> next = tmp;
                before -> next = p;
            }
        }
    } else {
        // head = tail = p;
        list -> head = p;
        list -> tail = p;
    }
}

void print(List list) {
    Node *tmp = list.head;
    while (tmp) {
        printf("%d, ",tmp -> value);
        tmp = tmp -> next;
    }
    printf("\n");
}

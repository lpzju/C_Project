#include <stdio.h>
#include <stdlib.h>

// 单链表，但是头插法

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list {
    Node *head;
} List;

void add(Node **head, int value);
// 这里不需要修改头指针head，所以传入头指针即可，不需要传入指向头指针的指针
void print(Node *head);
void addList(List *, int number);
void printList(List);

int main(){
    // 方法1，直接进行头插法
    // Node *head = NULL;
    // int number;
    // do {
    //     printf("请输入数字，直到-1结束:\n");
    //     scanf("%d",&number);
    //     if (number != -1) {
    //         // 进行插入
            // Node *temp;
    //         Node *p = (Node *) malloc (sizeof(Node));
    //         p -> value = number;
    //         p -> next = NULL;
    //         if (head) {
    //             temp = head;
    //             head = p;
    //             p -> next = temp;
    //         } else {
    //             head = p;
    //         }
    //     }
    // } while(number != -1);
    // for (temp = head; temp -> next; temp = temp -> next) {
    //     printf("%d, ",temp -> value);
    // }
    // printf("%d\n",temp -> value);
    // 方法2，使用函数进行封装，但是需要修改指针，所以传入的是指针的指针
    // Node *head = NULL;
    // int number;
    // do {
    //     printf("请输入数字，直到-1结束:\n");
    //     scanf("%d",&number);
    //     if (number != -1) {
    //         // 进行插入，但是现在是调用函数
    //         add(&head, number);
    //     }
    // } while(number != -1);
    // print(head);
    // 方法3，不传指针的指针，而是使用一个结构存储头指针，这样更加清晰
    List pList;
    pList.head = NULL;
    int number;
    do {
        printf("请输入数字，直到-1结束:\n");
        scanf("%d",&number);
        if (number != -1) {
            // 进行插入
            addList(&pList, number);
        }
    } while(number != -1);
    printList(pList);
    return 0;
}

void add(Node **head, int value){
    Node *p = (Node *) malloc (sizeof(Node));
    p -> value = value;
    p -> next = NULL;
    Node *temp;
    if (*head) {
        temp = *head;
        *head = p;
        p -> next = temp;
    } else {
        *head = p;
    }
}

void print(Node *head) {
    Node *temp = head;
    while (temp -> next) {
        printf("%d, ",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
}

void addList(List *list, int number){
    Node *p = (Node *) malloc (sizeof(Node));
    // Node *p;
    p -> value = number;
    p -> next = NULL;
    Node *temp;
    if (list -> head) {
        temp = list -> head;
        list -> head = p;
        p -> next = temp;
    } else {
        list -> head = p;
    }
}

void printList(List list) {
    Node *temp = list.head;
    while (temp -> next) {
        printf("%d, ",temp -> value);
        temp = temp -> next;
    }
    printf("%d\n",temp -> value);
}

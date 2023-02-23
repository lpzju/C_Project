#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

int main(){
    // 链表
    int number;
    Node *head = NULL;
    do {
        printf("请输入一个数字，直到输入-1停止:\n");
        scanf("%d",&number);
        if (number != -1) {
            Node *p = (Node *) malloc (sizeof(Node));
            p -> value = number;
            p -> next = NULL;
            Node *last = head;
            if(last){
                while(last -> next){
                    last = last -> next;
                }
                last -> next = p;
            }else{
                head = p;
            }
        }
    } while(number != -1);
    int i = 1;
    Node *temp = head;
    while(temp -> next){
        printf("正在输出第%d个数：%d\n",i,temp -> value);
        temp = temp -> next;
        i++;
    }
    printf("正在输出第%d个数：%d\n",i,temp -> value);
    return 0;
}


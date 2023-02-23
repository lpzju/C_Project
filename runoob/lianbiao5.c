#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

int main(){
    Node *head = NULL;
    // 链表，直到输入-1则停止
    int i = 1;
    int number;
    do {
        printf("请输入一个数，直到输入-1停止\n");
        scanf("%d",&number);
        if(number != -1){
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
    Node *temp;
    for(temp = head; temp -> next; temp = temp -> next){
        printf("正在输出第%d个数:%d\n",i,temp -> value);
        i++;
    }
    printf("正在输出第%d个数:%d\n",i,temp -> value);
}

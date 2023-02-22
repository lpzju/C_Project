#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

int main(){
    // 链表
    Node *head = NULL;
    int i, number;
    for(i = 0; i < 3; i++){
        printf("请输入第%d个数：\n",i+1);
        scanf("%d",&number);
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
    Node *temp;
    i = 1;
    for(temp = head; temp -> next; temp = temp -> next){
        printf("正在输出第%d个数:%d\n",i,temp -> value);
        i++;
    }
    printf("正在输出第%d个数:%d\n",i,temp -> value);
}

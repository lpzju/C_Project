#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

int main(){
    // 链表的尾插法
    Node *head = NULL;
    int i;
    int number;
    for(i = 0; i < 3; i++){
        printf("请输入第%d个数：\n",i+1);
        scanf("%d",&number);
        Node *p = (Node *) malloc (sizeof(Node));
        p -> value = number;
        p -> next = NULL;
        Node *last = head;
        if(head){
            for(last = head; last -> next; last = last -> next){

            }
            last -> next = p;
        }else{
            head = p;
        }
    }
    Node *temp;
    for(temp = head; temp -> next; temp = temp -> next){
        printf("%d\n",temp -> value);
    }
    printf("%d\n",temp -> value);
    return 0;
}

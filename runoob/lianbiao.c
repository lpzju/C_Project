#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

int main(){
    // 链表
    Node *head = NULL;
    printf("请输入三个数:\n");
    int i, number;
    for(i = 0; i < 3; i++){
        scanf("%d",&number);
        Node *p = (Node *) malloc (sizeof(Node));
        p -> value = number;
        p -> next = NULL;
        Node *last = head;
        if(last){
            while(last -> next){
                last = last -> next;
            }
        }else{
            head = p;
        }
        last -> next = p;
    }
}

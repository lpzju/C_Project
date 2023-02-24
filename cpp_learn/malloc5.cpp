#include <iostream>
using namespace std;

typedef struct _node {
    int value;
    struct _node *next;
} Node;

int main(){
    // 使用循环创建链表，还是不使用malloc
    Node header;
    Node *tmp;
    header.value = 0;
    header.next = NULL;
    tmp = &header;
    int i;
    for ( i = 1; i < 9; i++) {
        Node p;
        p.value = i;
        p.next = NULL;
        tmp -> next = &p;
        tmp = &p;
    }
    tmp -> next = NULL;
    tmp = header.next;
    while(tmp) {
        cout << tmp -> value << endl;
        tmp = tmp -> next;
    }
    return 0;
}

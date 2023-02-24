#include <stdio.h>

typedef struct _node {
    int value;
} Node;

void change(Node);

int main(){
    Node p;
    p.value = 4;
    printf("%d\n",p.value);
    change(p);
    printf("%d\n",p.value);
    return 0;
}

void change(Node node) {
    node.value = 5;
}

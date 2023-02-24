#include <iostream>
using namespace std;

typedef struct _node {
    int value;
    struct _node *next;
} Node;

int main(){
    // 不使用malloc的方法
    Node header;
    Node *temp;
    header.value = 1;
    Node node1;
    node1.value = 2;
    header.next = &node1;
    node1.next = NULL;
    Node node2;
    node2.value = 3;
    node1.next = &node2;
    node2.next = NULL;
    cout << header.value << (*(header.next)).value << endl;
    cout << (*(node1.next)).value << endl;
    for (temp = &header; temp -> next; temp = temp -> next) {
        cout << temp -> value << endl;
    }
    cout << temp -> value << endl;
    return 0;
}

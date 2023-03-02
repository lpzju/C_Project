#include <iostream>
using namespace std;

typedef struct _node {
    int value;
} Node;

void func1(Node *n) {
    n -> value = 3;
}

int main() {
    Node n1;
    n1.value = 5;
    cout << n1.value << endl;
    func1(&n1);
    cout << n1.value << endl;
}

#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode *Next;
};

int main(){
    ListNode header;
    ListNode *tmp = &header;
    header.value = 1;
    ListNode next;
    tmp -> Next = &next;
    tmp = tmp -> Next;
    next.value = 2;
    cout << tmp -> Next << '\n' << tmp << '\n' << tmp ->value << endl;
    return 0;
}

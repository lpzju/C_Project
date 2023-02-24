#include <iostream>
struct ListNode
{
    ListNode *Next;
    int value;
};
void AddNode(ListNode *head, int value)
{
    ListNode next;
    //printf("%x\n", &next);
    next.value = value;
    head->Next = &next;
}
void add()
{
    int a = 3;
    int b = 4;
    int c = 5;
}
int main()
{
    ListNode head;
    AddNode(&head, 2);
    add();
    printf("%d", (&head)->Next->value);
    return 0;
}


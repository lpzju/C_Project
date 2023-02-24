#include <iostream>
struct ListNode
{
    int value;
    ListNode *Next;
};
void AddNode(ListNode *head, int value)
{
    ListNode next;
    next.value = value;
    head->Next = &next;
}
int main()
{
    ListNode head;
    AddNode(&head, 2);
    AddNode(&head, 3);
    AddNode(&head, 5);
    AddNode(&head, 6);
    printf("%d", head.Next->value);
    return 0;
}

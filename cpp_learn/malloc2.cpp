#include <iostream>
struct ListNode
{
    int value;
    ListNode *Next;
};
int main()
{
    ListNode header;
    int n = 10;
    ListNode *tmp;
    tmp = &header;
    for (int i = 0; i < n; i++)
    {
        ListNode next;
        next.value = i;
        tmp->Next = &next;
        tmp = &next;
        printf("%p\n",&next);
    }
    tmp->Next = NULL;
    tmp = header.Next;
    while (tmp)
    {
        printf("%d\n", tmp->value);
        tmp = tmp->Next;
    }
    return 0;
}


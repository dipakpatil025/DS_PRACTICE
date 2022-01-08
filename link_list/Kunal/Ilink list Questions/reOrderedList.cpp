#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

// INSERT ListNode
// INSERT AT END

// INSERT AT BEGINING
ListNode *insertAtBeging(ListNode *head, int data)
{
    ListNode *nw = new ListNode(data);
    nw->next = head;
    return nw;
}
// INSERT AT MIDDLE
void insertAtMiddle(ListNode *head, int data, int post)
{
    ListNode *nw = new ListNode(data);
    ListNode *temp = head;
    int i = 1;
    while (i < post)
    {
        temp = temp->next;
        i++;
    }
    nw->next = temp->next;
    temp->next = nw;
}
// DELETE AT BEGINING
// DELETE AT MIDDLE
// DELETE AT END

// void inserWithRecursion(ListNode *head, int indx, int data)
// {
// if (head == NULL)
// {
//     return;
// }

// if (indx - 1 == 0)
// {
//     ListNode *nw = new ListNode(data);
//     nw->next = head->next;
//     head->next = nw;
//     return;
// }
// // cout << head->val << " ";
// inserWithRecursion(head->next, indx - 1, data);
// cout << head->val << " -> ";

// }
ListNode *inserWithRecursion(ListNode *head, int indx, int data)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (indx == 0)
    {
        ListNode *nw = new ListNode(data);
        nw->next = head;
        return nw;
        // cout << head->val << " ";
    }
    head->next = inserWithRecursion(head->next, indx - 1, data);
    return head;
    // return inserWithRecursion(head->next, indx - 1, data);
}
ListNode *inser(ListNode *head, int data)
{
    if (head == NULL)
    {
        ListNode *nw = new ListNode(data);

        return nw;
    }
    ListNode *temp = head;
    ListNode *nw = new ListNode(data);
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = nw;
    return head;
}
void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
ListNode *reverseBetween(ListNode *head, int left, int right)
{
    if (left == right)
    {
        return head;
    }
    ListNode *crr = head;
    ListNode *prev = NULL;
    for (int i = 0; crr != NULL && i < left - 1; i++)
    {
        prev = crr;
        crr = crr->next;
    }

    ListNode *last = prev;
    ListNode *newEnd = crr;

    ListNode *nxt = crr->next;
    for (int i = 0; crr != NULL && i < right - left + 1; i++)
    {
        crr->next = prev;
        prev = crr;
        crr = nxt;
        if (nxt != NULL)
        {
            nxt = nxt->next;
        }
    }

    if (last != NULL)
    {
        last->next = prev;
        newEnd->next = crr;
    }
    else
    {
        head = prev;
        newEnd->next = crr;
    }
    return head;
}
ListNode *mid(ListNode *head)
{
    ListNode *s = NULL;
    ListNode *f = head;
    while (f != NULL && f->next != NULL)
    {

        f = f->next->next;
        if (s == NULL)
        {
            s = head;
        }
        else
        {
            s = s->next;
        }
    }
    // cout << s->val << " : )" << endl;
    return s;
}

ListNode *revserList(ListNode *node)
{
    ListNode *prev = NULL;
    ListNode *crr = node->next;
    ListNode *nxt;

    while (crr != NULL)
    {
        // cout << crr->val << " ";
        nxt = crr->next;
        crr->next = prev;
        prev = crr;
        crr = nxt;
    }
    node->next = NULL;
    return prev;
}
int main()
{
    ListNode *head = NULL;
    // printList(head);
    // // printList(head);
    // head = insertAtBeging(head, 05);
    // // printList(head);
    // insertAtMiddle(head, 25, 2);
    // printList(head);
    // head = inserWithRecursion(head, 5, 55);
    // cout << endl;

    head = inser(head, 1);
    head = inser(head, 2);
    head = inser(head, 3);
    head = inser(head, 4);
    head = inser(head, 5);
    // head = inser(head, 6);
    // head = inser(head, 6);
    printList(head);

    ListNode *m = mid(head);
    cout << m->val << endl;

    ListNode *temp = head;
    ListNode *rv = revserList(m);

    // cout << rv->val << endl;
    // printList(head);
    // printList(rv);
    int i = 0;
    while (temp->next != NULL && rv->next != NULL)
    {
        ListNode *tt = temp->next;
        temp->next = rv;
        temp = tt;

        tt = rv->next;
        rv->next = temp;
        rv = tt;
    }
    if (rv)
    {
        temp->next = rv;
    }
    // cout << temp->val << endl;
    // rv = rv->next;
    // cout << rv->val << endl;
    printList(head);

    return 0;
}
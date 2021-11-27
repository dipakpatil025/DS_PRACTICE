#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};

// INSERT NODE
// INSERT AT END
void inser(node *head, int data)
{
    node *temp = head;
    node *nw = new node(data);
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = nw;
}
// INSERT AT BEGINING
node *insertAtBeging(node *head, int data)
{
    node *nw = new node(data);
    nw->next = head;
    return nw;
}
// INSERT AT MIDDLE
void insertAtMiddle(node *head, int data, int post)
{
    node *nw = new node(data);
    node *temp = head;
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

void printList(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = new node(10);
    head->next = new node(50);
    printList(head);
    inser(head, 100);
    printList(head);
    head = insertAtBeging(head, 05);
    printList(head);
    insertAtMiddle(head, 25, 2);
    printList(head);
    return 0;
}
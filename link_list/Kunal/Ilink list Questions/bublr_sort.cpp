#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void buble(int r, int c)
{
    if (c == 0)
    {
        return;
    }
    if (r < c)
    {
        cout << "* ";
        buble(r + 1, c);
        cout << endl;
    }
    else
    {
        // cout << "* ";
        cout << endl;
        buble(0, c - 1);
    }
}
int main()
{
    node *head = new node(20);
    node *fs = new node(10);
    node *sn = new node(5);
    node *tr = new node(55);
    node *fr = new node(6);
    head->next = fs;
    fs->next = sn;
    sn->next = tr;
    tr->next = fr;
    printList(head);
    buble(0, 4);
    return 0;
}
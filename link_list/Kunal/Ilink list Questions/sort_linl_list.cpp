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
node *mid(node *head)
{
    node *midPrev = NULL;

    while (head != NULL && head->next != NULL)
    {
        if (midPrev == NULL)
        {
            midPrev = head;
        }
        else
        {
            midPrev = midPrev->next;
        }

        head = head->next->next;
    }
    node *md = midPrev->next;
    midPrev->next = NULL;
    return md;
}
node *merg(node *left, node *right)
{
    node *temp = new node(-1);
    node *ans = temp;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            ans->next = left;
            left = left->next;
            ans = ans->next;
        }
        else
        {
            ans->next = right;
            right = right->next;
            ans = ans->next;
        }
    }
    ans->next = (left != NULL) ? left : right;
    return temp->next;
}
node *mergSort(node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    node *m = mid(head);
    node *left = mergSort(head);
    node *right = mergSort(m);

    return merg(left, right);
}
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
    // fr->next = new node(100);
    printList(head);
    // node *m = mid(head);
    // cout<<head->data<<endl;
    // cout << m->data << endl;
    mergSort(head);
    printList(head);
    return 0;
}
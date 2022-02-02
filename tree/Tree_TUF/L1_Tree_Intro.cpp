#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
    Node *root = new Node(100);
    Node *n1 = new Node(50);
    Node *n2 = new Node(150);
    Node *n3 = new Node(10);

    root->left = n1;
    root->right = n2;
    n1->left = n3;

    inOrder(root);

    return 0;
}
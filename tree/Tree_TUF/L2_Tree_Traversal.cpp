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

// PRE-TRAVERSAL
void preOrder(Node *root)
{
    if (root == NULL)
    {
        
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// INORDER TRAVERSAL

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

void postOrder(Node *root)
{
    if (root == NULL)
    {
        
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
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

    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int var)
    {
        data = var;
        left = NULL;
        right = NULL;
    }
};

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->left);
}

void level_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            auto nw = q.front();
            q.pop();
            if (nw->left)
            {
                q.push(nw->left);
            }
            if (nw->right)
            {
                q.push(nw->right);
            }
            cout << nw->data  << " ";
        }
        cout<<endl;
    }
}
int main()
{
    node *root = new node(100);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    level_traversal(root);
    return 0;
}
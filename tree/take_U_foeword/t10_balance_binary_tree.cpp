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

bool level_traversal(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    queue<node *> q;
    q.push(root);
    int c = 0;

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            auto nw = q.front();
            q.pop();
            if (nw->left)
            {
                if (!(nw->data > nw->left->data))
                {
                    return false;
                    /* code */
                }

                q.push(nw->left);
            }
            if (nw->right)
            {
                if (!(nw->data < nw->right->data))
                {
                    /* code */
                    return false;
                }

                q.push(nw->right);
            }
           c++;
        }
    }
    return true;
}
int main()
{
    node *root = new node(100);
    root->left = new node(50);
    root->right = new node(300);
    root->left->left = new node(4);
    root->left->right = new node(55);

    cout << level_traversal(root);
    return 0;
}
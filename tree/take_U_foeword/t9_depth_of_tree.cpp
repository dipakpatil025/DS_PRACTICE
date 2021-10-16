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

int depthOfTree(node* root){
    if (root == NULL)
    {
        return 0;
    }
    int ans = 1 + max(depthOfTree(root->left),depthOfTree(root->right));
    return ans;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(7);

    root->left->left = new node(3);
    root->left->right = new node(4);

    root->left->right->left = new node(5);
    root->left->right->right = new node(6);

     cout<<depthOfTree(root);
    // it_postOrder(root);
    // it_Inorder(root);
    // level_traversal(root);
    return 0;
}
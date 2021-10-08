#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int var){
        data = var;
        left = NULL;
        right = NULL;
    }
};

void inorder(node* root){
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
        cout<<root->data<<" ";
    inorder(root->left);
    
}
int main()
{
    node *root = new node(100);   
    node *lfl1 = new node(50);
    node *lfl2 = new node(25);
    node *lfr2 = new node(75);

    node *rr1 = new node(150);
    node *rrl2 = new node(125);
    node *rrr2 = new node(175);

    root->left=lfl1;

    root->left  = lfl1;
    root->right  = rr1;

    inorder(root);
  

    return 0;
}
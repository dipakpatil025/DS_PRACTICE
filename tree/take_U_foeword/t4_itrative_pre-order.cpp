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

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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


// Itrative Preorder

void it_preorder(node* root){
    if (root == NULL)
    {
        cout<<"Tree is empty "<<endl;
        return;
    }
    stack<node*> st;
    st.push(root);
    while (!st.empty())
    {
        auto nw = st.top();
        st.pop();
        if(nw->right)st.push(nw->right);
        if(nw->left) st.push(nw->left);
        cout<<nw->data<<" ";
    }
    

    
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


    it_preorder(root);
    // level_traversal(root);
    return 0;
}
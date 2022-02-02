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

vector<vector<int>> levelWiseTraversal(Node *root)
{
    vector<vector<int>> ans;
    if (!root)
    {
        return ans;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp;
        for (int i = 0; i < size; i++)
        {
            auto tNode = q.front();
            q.pop();
            if (tNode->left)
                q.push(tNode->left);
            if (tNode->right)
                q.push(tNode->right);
            temp.push_back(tNode->data);
        }
        ans.push_back(temp);
    }

    return ans;
}

int main()
{
    Node *root = new Node(100);
    Node *n1 = new Node(50);
    Node *n2 = new Node(150);
    Node *n3 = new Node(10);
    Node *n4 = new Node(75);
    Node *n5 = new Node(125);
    Node *n6 = new Node(175);

    root->left = n1;
    root->right = n2;

    n1->left = n3;
    n1->right = n4;

    n2->left = n5;
    n2->right = n6;

    vector<vector<int>> level;
    level = levelWiseTraversal(root);

    for (int i = 0; i < level.size(); i++)
    {
        for (int j = 0; j < level[i].size(); j++)
        {
            cout<<level[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
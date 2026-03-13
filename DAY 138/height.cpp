#include<iostream>
#include<algorithm>

using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter the data :- ";
    int d;
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    root = new node(d);
    cout<<"Enter the data in the LEFT of "<<d<<endl;

    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of "<<d<<endl;
    
    root->right = buildTree(root->right);

    return root;
}


int height(node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    int ans  = max(left,right) + 1;
    return ans; 
}

int main()
{
    /// 1 2 4 7 -1 11 -1 13 -1 -1 -1 5 8 -1 -1 9 -1 -1 3 -1 6 -1 10 12 -1 -1 -1
    node* root = NULL;
    root = buildTree(root);

    cout<<endl<<endl;
    cout<<"Height :- "<<height(root);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
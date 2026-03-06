#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root)
{


    int d;
    cout<<"Enter the data :- ";
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    root =  new node(d);

    cout<<"Enter the data to LEFT of "<<d<<" :- "<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter the data to RIGHT of "<<d<<" :- ";
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    node* root=NULL;

    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
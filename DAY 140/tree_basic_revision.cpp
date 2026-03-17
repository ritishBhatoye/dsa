#include<iostream>
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
        return NULL;

    root = new node(d);

    cout<<"Enter the data for the LEFT of :- "<<endl;
    root->left =  buildTree(root->left);

    cout<<"Enter the data for the RIGHT of :- "<<endl;
    root->right = buildTree(root->right);

    return root;
}

void preOrder(node* root)
{
    if(root==NULL)
        return ;

    //moving to left
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
    
    
}

int main()
{
    //  3 1 -1 -1 2 -1 -1

    node* root=NULL;

    root = buildTree(root); 

    cout<<"Pre Order :- "<<endl;
    preOrder(root);
    cout<<endl<<endl;
    return 0;
}
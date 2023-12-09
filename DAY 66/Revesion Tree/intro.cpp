#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"ENTER THE DATA : "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"ENTER THE DATA FOR INSERTING IN LEFT OF : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"ENTER THE DATA FOR INSERTING IN RIGHT OF : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

int main()
{
    node* root=NULL;
    cout<<endl<<endl;
    
    //creating TREE
    root=buildTree(root);

    cout<<endl<<endl;

    return 0;
}
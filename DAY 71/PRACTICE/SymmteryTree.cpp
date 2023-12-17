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
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter the data for inserting in the left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

bool isSymmetric(node* root){
    if(root==NULL){
        return false;
    }
    else if(root->left!=NULL && root->right!=NULL){
        return true;
    }

    bool leftAns=isSymmetric(root->left);
    bool rightAns=isSymmetric(root->right);

    if(leftAns && rightAns)
    {
        return true;
    }
}
int main()
{   //1 2 3 -1 -1 4 -1 -1 2 4 -1 -1 3 -1 -1
   //1 2 -1 3 -1 -1 2 -1 3 -1 -1
    node* root=NULL;
    //creating node;
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    if(isSymmetric(root)){
        cout<<"TREE IS SYMMETRIC "<<endl;
    }
    else{
        cout<<"TREE IS NOT SYMMETRIC "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
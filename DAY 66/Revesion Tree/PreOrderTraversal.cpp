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
    if(data==-1)
    {
        return NULL;
    }

    cout<<"ENTER THE DATA FOR INSERTING IN THE LEFT OF : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"ENTER THE DATA FOR INSERTING IN THE RIGHT OF : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void preOrderTraversal(node* root){
    if(root==NULL)
    {
       return ;   
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main(){
    node* root=NULL;

    //creating TREE
    cout<<endl<<endl;
    root=buildTree(root);
    preOrderTraversal(root);
    cout<<endl<<endl;

    return 0;
}
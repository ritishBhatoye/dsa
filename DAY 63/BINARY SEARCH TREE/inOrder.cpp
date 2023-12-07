#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
void inOrderTraversal(node* root){
    //base CASE
    if(root==NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of  : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

int main()
{

    node* root=NULL;
     //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    root=buildTree(root);
    
    cout<<"PRINTING INORDER TRAVERSAL : "<<endl;
    inOrderTraversal(root);
    return 0;
}
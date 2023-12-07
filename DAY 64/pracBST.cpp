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

node* buildTree(node* root)
{
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data in left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data in right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void inOrderTraversal(node* root){
    //base case
    if(root==NULL){
        return ;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(node* root){
    //base case
    if(root==NULL){
        return ;
    }
    
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
    //base case
    if(root==NULL){
        return ;
    }
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";

}
int main(){
    node* root=NULL;
    //create TREEE
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"INORDER TRAVERSAL : "<<endl;
    inOrderTraversal(root);
    cout<<endl<<endl;
    cout<<"PREORDER TRAVERSAL : " <<endl;
    preOrderTraversal(root);
    cout<<endl<<endl;
    cout<<"POSTORDER TRAVERSAL : " <<endl;
    postOrderTraversal(root);
    cout<<endl<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class node{
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
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;

    }
    
    cout<<"Enter the data for left of "<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right of "<<endl;
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
    if(root==NULL){
        return ;
    }
    
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrder(node* root){
    if(root==NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root=NULL;
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<endl<<endl;
    cout<<"INORDER TRAVERSAL : "<<endl;
    inOrderTraversal(root);
    cout<<endl<<endl;
    cout<<"PREORDER TRAVERSAL : "<<endl;
    preOrderTraversal(root);
    cout<<endl<<endl;
    cout<<"POSTORDER TRAVERSAL : "<<endl;
    postOrder(root);
    cout<<endl<<endl;


    return 0;
}
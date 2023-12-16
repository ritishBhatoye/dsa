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
    root=new node(root);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data for inserting in the left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

node* lca(node* root,int n1,int n2)
{
  if(root==NULL){
    return NULL;
  }
  if(root->data==n1 || root->data==n2){
    return root;
  }
  node* leftAns=lca(root->left,n1,n2);
  node* rightAns=lca(root->right,n1,n2);
  if(leftAns!=NULL && rightAns==NULL){
    return leftAns;
  }
  else if(leftAns==NULL && rightAns!=NULL){
    return rightAns;
  }
  else if(leftAns!=NULL && rightAns!=NULL){
    return root;
  }
  else{
    return NULL;
  }

}

int main()
{
    node* root=NULL;
    //creating BT
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    int n1,n2;
    cout<<"ENTER N1 VALUE : "<<endl;
    cin>>n1;
    cout<<"ENTER N2 VALUE : "<<endl;
    cin>>n2;
    cout<<endl;
    node* ans=lca(root,n1,n2);
    cout<<endl<<endl;
    cout<<endl<<endl;
     
    return 0;
}
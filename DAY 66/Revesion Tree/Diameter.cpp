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
     if(data==-1){
        return NULL;
     }

     cout<<"Enter the data for inserting in the left of : "<<endl;
     root->left=buildTree(root->left);
     cout<<"Enter the data for inserting in the right of : "<<endl;
     root->right=buildTree(root->right);
     return root;
}
int height(node* root)
{
   if(root==NULL){
    return 0;
   }

   int left=height(root->left);
   int right=height(root->right);
   int ans=max(left,right) +1;
   return ans;
}   x
int diameter(node* root){
    if(root==NULL){
        return 0;
    }

    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+ height(root->right) + 1;
    int ans=max(op1,max(op2,op3));
    return ans;
}

int main(){
    node* root=NULL;

    //create TREE
    root=buildTree(root);
    
    cout<<endl<<endl;
    cout<<"DIAMETER : "<<diameter(root)<<endl;
    cout<<endl<<endl;



    
    return 0;
}
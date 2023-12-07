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
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void inOrderBinaryTreeNode(node* root,int &count){
//base case 

if(root==NULL){
    return ;
}
inOrderBinaryTreeNode(root->left,count);
if(root->left==NULL && root->right==NULL){
count++;
}
inOrderBinaryTreeNode(root->right,count);
}

int main(){
    node* root=NULL;
    root=buildTree(root);
    int cnt=0;
    cout<<endl<<endl;
    inOrderBinaryTreeNode(root,cnt);
    cout<<"COUNT OF LEAF NODES : "<<cnt<<endl;
    cout<<endl<<endl;
    return 0;
}
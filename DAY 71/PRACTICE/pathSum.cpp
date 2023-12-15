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
bool hasPath(node* root,int tSum){
    int sum=0;
    if(root==NULL){
        return true;
    }

    int leftAns=height(root->left);
    int rightAns=height(root->right);
    sum=max(left)

}
int main()
{
    node* root=NULL;
    //creating BT
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
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
  
    cout<<"Enter the data for inserting in the left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

bool isTreeId(node* r1,node* r2){
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL && r2!=NULL){
        return false;
    }
    if(r1!=NULL && r2==NULL){
        return false;
    }
    // if(r1->data==r2->data)
    // {
    //     return true;
    // }

    bool leftAns=isTreeId(r1->left,r2->left);
    bool rightAns=isTreeId(r1->right,r2->right);
    bool ans=r1->data==r2->data;

    if(leftAns && rightAns && ans)
    {
      return true;
    }
    else{
        return false;
    }
}

int main()
{
    node* r1=NULL;
    node* r2=NULL;

    //bT
    // 1 2 -1 -1 3 -1 -1
    r1=buildTree(r1);
    r2=buildTree(r2);

    if(isTreeId(r1,r2))
    {
      cout<<"TREES ARE IDENTICAL "<<endl;
    }
    else
    {
        cout<<"TREE ARE NOT IDENTICAL "<<endl;
    }

    return 0;
}
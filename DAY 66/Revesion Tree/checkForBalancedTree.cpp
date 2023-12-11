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

node* buildTree(node* root)
{
cout<<"Enter the data : "<<endl;
int data;
cin>>data;
root=new node(data);
if(data==-1){
    return NULL;
}
cout<<"Enter the data for inserting in the left of : "<<data<<endl;
root->left=buildTree(root->left);
cout<<"Enter the data for inserting in the right of : "<<data<<endl;
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
int ans=max(left,right)+1;
return ans;
}
bool isBal(node* root){
    if(root==NULL){
        return true;
    }

    bool left=isBal(root->left);
    bool right=isBal(root->right);

    bool diff=abs(height(root->left) - height(root->right))<=1;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    node* root=NULL;
    root=buildTree(root);
//1 3 7 -1 -1 5 -1 -1 4 8 -1 -1 -1
    cout<<endl<<endl;
    if(isBal(root)){
        cout<<"TREE IS BALANCED "<<endl;
    }
    else
    {
        cout<<"TREE IS NOT BALANCED "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
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
    cout<<"Enter the data for inserting in the left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

int height(node* root){
    int ans=0;
    if(root==NULL){
        return ans;
    }
    int leftAns=height(root->left);
    int rightAns=height(root->right);

    ans=max(leftAns,rightAns) +1;
    return ans;
}

int main(){
    node* root=NULL;
    //creating BT
    cout<<endl<<endl;
    //1 2 3 -1 -1 5 4 -1 -1 -1 6 -1 -1
    root=buildTree(root);
    cout<<"HEIGHT OF TREE : "<<height(root)<<endl;
    cout<<endl<<endl;

    return 0;
}
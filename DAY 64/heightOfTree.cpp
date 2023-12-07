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
    cout<<"Enter the data inserting in the left of : "<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data inserting in the right of : "<<endl;
    root->right=buildTree(root->right);
    return root;
}

int height(node* root){
    //base case
    if(root==NULL){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    int ans=max(left,right) + 1;
    return ans;
}
int main()
{
    node* root=NULL;
    //creating tree
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<endl<<endl;
    cout<<"DEPTH OF TREE : "<<height(root)<<endl;
    cout<<endl<<endl;

    return 0;
}
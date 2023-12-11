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
    if(data==-1)
    {
        return NULL;
    }
    
    cout<<"Enter the data for inserting in the left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void inOrderTraversal(node* root,int &count){
    //base case
    if(root==NULL){
        return ;
    }

    inOrderTraversal(root->left,count);
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    inOrderTraversal(root->right,count);
}
int leafNode(node* root){
int cnt=0;
inOrderTraversal(root,cnt);
return cnt;
}

int main()
{
    node* root=NULL;
    //1 3 7 -1 -1 5 -1 -1 4 8 -1 -1 -1
    //create TREE
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"LEAF NODE : "<<leafNode(root)<<endl;
    cout<<endl<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;
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
void solve(node* root,int k,int &count,vector<int> path)
{

   
}
int sumK(node* root){
    vector<int> path;
    int count=0;
    solve(root,k,count,path)
    return count;
}

int main(){
    node* root=NULL;
    //creating BST
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"NUMBER OF LEAF NODES : "<<leafNode(root)<<endl;
    cout<<endl<<endl;

    return 0;
}
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
    cout<<"Enter the data for inserting in the left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
int maxPathSum(node* root){
    int maxi=INT_MIN;
    maxPathDown(root,maxi);
    return maxi;
}
int maxPathDown(node* root,int &maxi){
    if(root==NULL){
        return 0;
    }
    int left=max(0,maxPathDown(root->left,maxi));
    int right=max(0,maxPathDown(root->right,maxi));

    maxi=root->data +  max(left,right);
    return max(left,right)+root->data; 
}

int main(){
    node* root=NULL;
    cout<<endl<<endl;
    root=buildTree(root);

    cout<<endl<<endl;
    cout<<"MAXIMUM PATH SUM : "<<maxPathSum(root)<<endl;
    cout<<endl<<endl;

    return 0;
}
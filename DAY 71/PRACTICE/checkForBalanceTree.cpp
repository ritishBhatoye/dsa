///COMPLEXITY o(N^2)
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
int height(node* root){
    int ans=0;
    if(root==NULL){
        return ans;
    }

    int leftAns=height(root->left);
    int rightAns=height(root->right);
    ans=max(leftAns,rightAns) + 1;
    return ans;
}
bool isBal(node* root){
    //base case
    if(root==NULL){
        return true;
    }
    int leftH=height(root->left);
    int rightH=height(root->right);
    
    bool leftAns=isBal(root->left);
    bool righttAns=isBal(root->right);

    bool ans=abs(leftH-rightH) <= 1;

    if(ans && leftAns && righttAns){
     return true;
    }
    else{
        return false;
    }
}

int main(){

    node* root=NULL;
    cout<<endl<<endl;
    //1 10 5 -1 -1 -1 39 -1 -1
    //building tree
    root=buildTree(root);

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
#include<iostream>
#include<vector>
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
void printLeafNode(node* root){
    //base case
    if(root==NULL)
    {
        return ;
    }

    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
        return ;
    }

   if(root->left)
   {
     printLeafNode(root->left);
    }
    else{
    printLeafNode(root->right);
    }
}
int main(){
    node* root=NULL;
    //creating TREE
    root=buildTree(root);
    cout<<endl<<endl;
    
    cout<<endl<<endl;
    printLeafNode(root);
    //7 9 8 10 -1 -1 9 -1 -1 8 -1 -1 7 6 -1 -1 -1
    //3 2 -1 -1 1 -1 -1
    cout<<endl<<endl;

    return 0;
}
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

void inOrder(node* root){
    if(root==NULL){
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void postOrder(node* root){
    if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=NULL;
    cout<<endl<<endl;
    //building tree
    root=buildTree(root);
    cout<<endl<<endl;
    //1 2 3 6 -1 -1 5 -1 -1 4 -1 -1 -1
    cout<<"INORDER : "<<endl;
    inOrder(root);
    cout<<endl<<endl;
    cout<<"POSTORDER : "<<endl;
    postOrder(root);
    cout<<endl<<endl;
    cout<<"PREORDER : "<<endl;
    preOrder(root);
    cout<<endl<<endl;






    return 0;
}
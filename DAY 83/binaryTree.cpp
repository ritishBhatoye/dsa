#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

Node* buildTree(Node* root){
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    root=new Node(data);

    if(data==-1){
        return NULL;
    }
    
    cout<<"LEFT OF "<<data<<" : ";
    root->left=buildTree(root->left);

    cout<<"RIGHT OF "<<data<<" ";
    root->right=buildTree(root->right);

    return root;
}

void preOrder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<endl;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    cout<<endl;

}

void inOrder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<endl;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

    cout<<endl;

}

void postOrder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<endl;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    cout<<endl;

}

int main(){
    Node* root=NULL;

    root=buildTree(root);

    cout<<"PRE ORDER  "<<endl;
    inOrder(root);
    cout<<"IN ORDER   "<<endl;
    preOrder(root);
    cout<<"POST ORDER "<<endl;
    postOrder(root);


    
}



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
    cout<<"Enter the data : "<<" ";
    cin>>data;

    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    
    cout<<"LEFT OF "<<data<<" "<<endl;
    root->left=buildTree(root->left);
    cout<<"RIGHT OF "<<data<<" "<<endl;
    root->right=buildTree(root->right);
    return root;
}

void preOrder(Node* root)
{
    if(root==NULL){
        return ;

    }

    cout<<root->data<<" ";
    preOrder(root->left);

    preOrder(root->right);



}

void inOrder(Node* root){
    if(root==NULL){
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);


}

void postOrder(Node* root){
    if(root==NULL){
        return ;
    }


    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";


}

//1 2 3 6 -1 -1 5 -1 -1 4 -1 -1 -1
int main(){
    Node* root=NULL;

    root=buildTree(root);

    cout<<endl;
    cout<<"PRE ORDER "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"IN ORDER "<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"PRE ORDER "<<endl;
    postOrder(root);


    cout<<endl<<endl;
    cout<<endl<<endl;


return 0;
}
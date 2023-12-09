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

    cout<<"Enter the data to insert in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data to insert in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}


bool isIdentical(node* r1,node* r2){
    //base case
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL && r2!=NULL){
        return false;
    }
    if(r1!=NULL & r2==NULL){
        return false;
    }

    bool left=isIdentical(r1->left,r2->left);
    bool right=isIdentical(r1->right,r2->right);

    bool value=r1->data==r2->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    node* r1=NULL;
    node* r2=NULL;
    cout<<endl<<endl;
    cout<<"TREE 1 : "<<endl;
    r1=buildTree(r1);
    cout<<endl<<endl;
    cout<<"TREE 2 : "<<endl;
    r2=buildTree(r2);
    cout<<endl;
    if(isIdentical(r1,r2)){
        cout<<"YES BOTH TREE 1 AND TREE 2 ARE IDENTICAL :- "<<endl;
    }
    else
      {
        cout<<"NO BOTH TREE 1 AND TREE 2 ARE NOT!!! IDENTICAL :- "<<endl;
      }

    cout<<endl<<endl;


    return 0;
}
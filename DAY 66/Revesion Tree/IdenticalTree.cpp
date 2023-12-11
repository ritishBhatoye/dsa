#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
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
cout<<"Enter the data for inserting in left of : "<<data<<endl;
root->left=buildTree(root->left);
cout<<"Enter the data for inserting in right of : "<<data<<endl;
root->right=buildTree(root->right);
return root;
}

bool identical(node* r1,node* r2){
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL && r2!=NULL){
        return false;
    }
    if(r1!=NULL && r2==NULL){
        return false;
    }

    bool left=identical(r1->left,r2->left);
    bool right=identical(r2->right,r2->right);
    
    bool val=r1->data==r2->data;

    if(left && right && val){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    node* r1=NULL;
    node* r2=NULL;
    //creating TREE
    cout<<endl<<endl;
    cout<<"ENTER THE VALUE OF TREE 1 "<<endl;
    r1=buildTree(r1);
    cout<<endl;
    cout<<"ENTER THE VALUE OF TREE 2 "<<endl;
    r2=buildTree(r2);
    cout<<endl;
    if(identical(r1,r2)){
        cout<<"TREES ARE IDENTICAL "<<endl;
    }
    else{
        cout<<"TREES ARE NOT IDENTICAL "<<endl;

    }
    cout<<endl<<endl;

    return 0;
}
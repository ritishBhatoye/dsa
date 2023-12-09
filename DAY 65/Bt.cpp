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

node* buildTree(node* root){
    
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data to insert in left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data to insert in right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root; 
}

int height(node* root){
    if(root==NULL){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    int ans=max(left,right)+1;
    return ans;
}

bool isBal(node* root){
    //base case
    if(root==NULL){
        return true;
    }

    bool left=isBal(root->left);
    bool right=isBal(root->right);

    bool diff=abs(height(root->left)-height(root->right));

    if(left && right && diff){
        return 1;
    }
    else{
        return false;
    }
}

int main(){
    node* root=NULL;

    root=buildTree(root);
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    if(isBal(root)){
        cout<<"YES TREE IS BALANCED : "<<endl;
    }
    else{
        cout<<"NO TREE IS NOT BALANCED : "<<endl;
    }

    return 0;
}
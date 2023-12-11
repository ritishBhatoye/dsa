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

pair<bool,int> isSumTree(node* root){
  //base case
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
    }
    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p=make_pair(true,root->data);
    }

    pair <bool,int> leftAns=isSumTree(root->left);
    pair <bool,int> rightAns=isSumTree(root->right);

    bool left=leftAns.first;
    bool right=rightAns.first;

    bool condn=root->data==leftAns.second+ rightAns.second;

    pair<bool,int> ans;

    if(left && right && condn){
        ans.first=true;
        ans.second=2*(root->data);
    }
    else{
        ans.first=false;
    }
    return ans;
}

bool isSumTreeTrue(node* root){
    return isSumTree(root).first;
}

int main(){

    node* root=NULL;
    //creating TREE
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl;
    if(isSumTreeTrue(root)){
        cout<<" TREE IS SUM TREE "<<endl;
    }
    else{
        cout<<"TREE IS NOT SUM TREE "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
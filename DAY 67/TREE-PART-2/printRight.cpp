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

    cout<<"Enter the data for inserting in left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
    
}

void printRight(node* root){
    vector<int> ans;
    //base case
    if((root==NULL) || (root->left==NULL && root->right==NULL)){
        return ;
    }
    if(root->right){
        printRight(root->right);
    }
    else{
        printRight(root->left);
    }

    ans.push_back(root->data);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    node* root=NULL;
    //creating tree
    root=buildTree(root);
    //3 2 -1 -1 1 -1 -1
    cout<<endl<<endl;
    printRight(root);
    cout<<endl<<endl;
    return 0;
}
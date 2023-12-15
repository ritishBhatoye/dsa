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

void leftPrint(node* root,vector<int> &ans){
    if((root==NULL)||(root->left==NULL && root->right==NULL)){
    return ;
    }
    ans.push_back(root->data);
    if(root->left){
       leftPrint(root->left,ans);
    }
    else{
        leftPrint(root->right,ans);
    }
}

void leafPrint(node* root,vector<int> &ans){
    if(root==NULL)
    {
        return ;
    }

    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return ;
    }
    leafPrint(root->left,ans);
    leafPrint(root->right,ans);
}

void rightPrint(node* root,vector<int> &ans){
    if((root==NULL) || (root->left==NULL && root->right==NULL)){
        return ;
    }
   
    if(root->right){
        rightPrint(root->right,ans);
    }
    else
    {
         rightPrint(root->left,ans);
    }

   ans.push_back(root->data);
}

vector<int> boundaryTraversal(node* root){
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
    ans.push_back(root->data);
    leftPrint(root->left,ans);
    leafPrint(root->left,ans);
    leafPrint(root->right,ans);
    rightPrint(root->right,ans);
   
    return ans;
}

int main(){
    node* root=NULL;
    cout<<endl<<endl;

    root=buildTree(root);

    cout<<endl<<endl;
    
    vector<int> ans=boundaryTraversal(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    //1 2 4 -1 -1 5 8 -1 -1 9 -1 -1 3 6 -1 -1 7 -1 -1 

    

    cout<<endl<<endl;



    return 0;
}
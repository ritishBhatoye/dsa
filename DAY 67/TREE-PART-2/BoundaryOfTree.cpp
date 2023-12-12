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

void traverseLeft(node* root,vector<int> &ans){
    //base case
    if((root==NULL || (root->left==NULL && root->right==NULL))){
        return ;
    }
    ans.push_back(root->data);

    if(root->left)
    {
        traverseLeft(root->left,ans);
    }
else
    {
        traverseLeft(root->right,ans);
    }
}
void traverseRight(node* root,vector<int> &ans){
if((root==NULL) || (root->left==NULL && root->right==NULL)){
    return ;
}
if(root->right){
    traverseRight(root->right,ans);
}
else{
    traverseRight(root->left,ans);
}
ans.push_back(root->data);
}
void traverseLeaf(node* root,vector<int> &ans){
    //base case
    if(root==NULL){
        return ;
    }

    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return ;
    }

    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);

}
vector<int> boundary(node* root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }

    ans.push_back(root->data);

    traverseLeft(root->left,ans);

    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);

    traverseRight(root->right,ans);

    return ans;

}
int main(){

    node* root=NULL;
    cout<<endl<<endl;
     //7 9 8 10 -1 -1 9 -1 -1 8 -1 -1 7 6 -1 -1 -1
    //3 2 -1 -1 1 -1 -1
    root=buildTree(root);
    cout<<endl<<endl;
    vector<int> ans;
    vector<int> res;
    ans=boundary(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;
    return 0;
}
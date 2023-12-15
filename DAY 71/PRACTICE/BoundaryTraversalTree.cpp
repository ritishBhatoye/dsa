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

void LeftPrint(node* root,vector<int> &ans){
    if((root==NULL) ||(root->left==NULL && root->right==NULL)){
        return ;
    }
   
   if(root->left!=NULL && root->right!=NULL){
    ans.push_back(root->data);
   }

    if(root->left){
        LeftPrint(root->left,ans);
    }
    else{
        LeftPrint(root->right,ans);
    }

}

void LeafPrint(node* root,vector<int> &ans)
{
if(root==NULL){
    return ;
}

if(root->left==NULL && root->right==NULL){
    ans.push_back(root->data);
}

LeafPrint(root->left,ans);
LeafPrint(root->right,ans);
}

void rightPrint(node* root,vector<int> &ans)
{
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

vector<int> BoundaryTraversal(node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }

    ans.push_back(root->data);
    LeftPrint(root->left,ans);
    LeafPrint(root->left,ans);
    LeafPrint(root->right,ans);
    rightPrint(root->right,ans);
    
    return ans;


}
int main()
{
    node* root=NULL;
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    vector<int> ans=BoundaryTraversal(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    //1 2 4 -1 -1 5 8 -1 -1 9 -1 -1 3 6 -1 -1 7 -1 -1 

    cout<<endl<<endl;

    return 0;
}
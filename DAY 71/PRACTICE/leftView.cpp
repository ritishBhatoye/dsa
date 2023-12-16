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

void solve(node* root,vector<int> &ans,int lvl){
    if(root==NULL){
        return ;
    }
    if(lvl==ans.size())
    {
     ans.push_back(root->data);
    }
    solve(root->left,ans,lvl+1);
    solve(root->right,ans,lvl+1);
}

vector<int> leftView(node* root){
    vector<int> ans;
    solve(root,ans,0);
    return ans;
}

int main(){
    node* root=NULL;
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    vector<int> ans=leftView(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;
   //2 -1 3 -1 4 -1 5 -1 6 -1 -1
   //1 2 4 -1 8 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    return 0;
}
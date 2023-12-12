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
void solve(node* root,vector<int> &ans,int level){
    //base case
    if(root==NULL){
        return;
    }
    
    if(level==ans.size()){
        ans.push_back(root->data);
    }

    solve(root->right,ans,level+1);
    solve(root->left,ans,level+1);

}
vector<int> rightView(node* root){
    vector<int> ans;
    int level=0;

    solve(root,ans,level);
    
    return ans;
    
}

int main(){
    //1 2 3 -1 -1 4 -1 7 -1 -1 5 -1 6 -1 8 -1 9 -1 -1
     node* root=NULL;
     root=buildTree(root);

     cout<<endl<<endl;
     vector<int> ans=rightView(root);
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
     }
     cout<<endl<<endl;

    return 0;
}
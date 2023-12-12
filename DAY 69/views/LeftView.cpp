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
    if(data==-1)
    {
        return NULL;
    }

    cout<<"Enter the data for inserting in the left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}
void solve(node* root,vector<int> &ans,int level)
{
//base caser
if(root==NULL){
    return ;
}
if(level==ans.size()){
    ans.push_back(root->data);
}
solve(root->left,ans,level+1);
solve(root->right,ans,level+1);

}
vector<int> leftView(node* root){
    int level=0;
    vector<int> ans;

    solve(root,ans,level);
    return ans;
}

int main(){

    node* root=NULL;
    //creating tree
    cout<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"LEFT VIEW : "<<endl;
    //1 2 3 -1 -1 4 -1 7 -1 -1 5 -1 6 -1 8 -1 9 -1 -1
    vector<int> ans=leftView(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}
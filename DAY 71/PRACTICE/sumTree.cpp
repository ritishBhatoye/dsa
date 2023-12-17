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

pair<bool,int>  sumTree(node* root){
    //base case
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    if(root->left ==NULL && root->right==NULL){
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }

    pair<bool,int> leftAns=sumTree(root->left);
    pair<bool,int> rightAns=sumTree(root->right);

    bool left=leftAns.first;
    bool right=rightAns.first;

    bool cond=root->data==leftAns.second+rightAns.second;
    
    pair<bool,int> ans;

    if(left && right && cond){
        ans.first=true;
        ans.second=2*root->data;
  
    }
    else
    {
        ans.first=false;
    }
return ans;
}

bool isSumTree(node* root){
    return sumTree(root).first;

}
int main(){
    node* root=NULL;
    //creating BT
    cout<<endl<<endl;
    root=buildTree(root);

    cout<<endl<<endl;
    if(isSumTree(root)){
        cout<<"IT IS SUM TREE "<<endl;
    }
    else{
        cout<<"IT IS NOT SUM TREE "<<endl;
    }
    cout<<endl<<endl;



    return 0;
}
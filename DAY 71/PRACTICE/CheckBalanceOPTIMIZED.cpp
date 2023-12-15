///COMPLEXITY o(N^2)
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;
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
int height(node* root){
    int ans=0;
    if(root==NULL){
        return ans;
    }

    int leftAns=height(root->left);
    int rightAns=height(root->right);
    ans=max(leftAns,rightAns) + 1;
    return ans;
}

pair<bool,int> balanceFast(node* root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }

    pair<bool,int> left=balanceFast(root->left);
    pair<bool,int> right=balanceFast(root->right);


    bool leftAns=left.first;
    bool rightAns=right.first;

    bool diff=abs(left.second-right.second) <=1;
    pair<bool,int> ans;
    ans.second=max(left.second,right.second) + 1;
    if(leftAns && rightAns && diff){
        ans.first=true;
    }
    else{
        ans.first=false;
    }
    return ans;
}
bool isBal(node* root){
    //base case
    return balanceFast(root).first;
}

int main(){

    node* root=NULL;
    cout<<endl<<endl;
    //1 10 5 -1 -1 -1 39 -1 -1
    //building tree
    root=buildTree(root);

    cout<<endl<<endl;
    if(isBal(root)){
        cout<<"TREE IS BALANCED "<<endl;
    }
    else
    {
       cout<<"TREE IS NOT BALANCED "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
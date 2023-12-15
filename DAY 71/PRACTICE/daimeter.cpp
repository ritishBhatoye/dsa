//optimized O(n)
#include<iostream>
#include <utility>
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

node* buildTree(node* root)
{
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

int height(node* root){
    int ans=0;
    if(root==NULL){
        return ans;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    ans=max(leftHeight,rightHeight) + 1;
    return ans;
}

pair<int,int> diameter(node* root){
    //base case
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    
    pair<int,int> leftAns=diameter(root->left);
    pair<int,int> rightAns=diameter(root->right);

    int op1=leftAns.first;
    int op2=rightAns.first;
    int op3=leftAns.second + rightAns.second + 1;

    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(leftAns.second,rightAns.second) + 1;
    return ans;
}



int diameterOfTree(node* root){
    //base case
 return diameter(root).first;
}

int main()
{
    node* root=NULL;
    //creating BT
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    //1 2 3 -1 -1 5 4 -1 -1 -1 6 -1 -1
    cout<<"DIAMETER OF BINARY TREE : "<<diameterOfTree(root)<<endl;
    cout<<endl<<endl;


    

    return 0;
}
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
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

void inOrder(node* root,int &cnt){
    //base case
    if(root==NULL){
        return ;
    }

    inOrder(root->left,cnt);
    if(root->left==NULL && root->right==NULL){
        cnt++;
    }
    inOrder(root->right,cnt);

}

int ans(node* root){
    int cnt=0;
    inOrder(root,cnt);
    return cnt;
}

int main(){
    node* root=NULL;
    cout<<endl<<endl;

    root=buildTree(root);
    // 20 10 5 -1 -1 15 13 -1 -1 -1 35 30 -1 -1 42 -1 -1
    cout<<endl<<endl;
    cout<<"NUMBER OF LEAF NODES :- "<<ans(root)<<endl;
    cout<<endl<<endl;
    
    return 0;
}
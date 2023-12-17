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


node* solve(node* root,int &k,int n){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n){
        return root;
    }
    node* leftAns=solve(root->left,k,n);
    node* rightAns=solve(root->right,k,n);

    if(leftAns!=NULL && rightAns==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return leftAns;
    }
    if(leftAns==NULL && rightAns!=NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return rightAns;
    }

}
int kthAncestor(node* root,int k,int n){
    node* ans=solve(root,k,n);
    if(ans==NULL || ans->data==n){
        return -1;
    }
    else{

        return ans->data;
    }
}
int main()
{
    node* root=NULL;
    //creating BT
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    int n1,k;
    cout<<"ENTER N1 VALUE : "<<endl;
    cin>>n1;
    cout<<"ENTER THE VALUE OF K : "<<endl;
    cin>>k;
    cout<<endl;
    cout<<"KTH ANCESTOR : "<<kthAncestor(root,k,n1)<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    // 1 2 4 -1 -1 5 -1 -1 3 -1 -1
    return 0;
}
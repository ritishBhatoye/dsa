//LCA :- Lowest Common Ancestor
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

node* lca(node* root,int n1,int n2){
    //base case
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n1){
        return root;
    }

    node* leftAns=lca(root->left,n1,n2);
    node* rightAns=lca(root->right,n1,n2);

    if(leftAns!=NULL && rightAns!=NULL){
        return root;
    }
    else if(leftAns!=NULL && rightAns==NULL){
        return leftAns;
    }
    else if(leftAns==NULL && rightAns!=NULL){
        return rightAns;
    }
    else 
    {
    return NULL;
    }
}
int main(){
    node* root=NULL;
    ///creating BT
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    
    //5 2 3 -1 -1 4 -1 -1 -1
    //1 2 6 -1 8 -1 -1 3 4 -1 -1 5 21 -1 -1 -1
    cout<<endl<<endl;

    int n1,n2;

    cout<<"ENTER THE NODE-1 : "<<endl;
    cin>>n1;
    cout<<"ENTER THE NODE-2 : "<<endl;
    cin>>n2;
    node* ans=lca(root,n1,n2);
    cout<<"LCA FOR "<<"NODE -> 1 : "<<n1<<" NODE -> 2 : "<<n2<<" = "<<ans->data<<endl;
    cout<<endl<<endl;
    

    return 0;
}
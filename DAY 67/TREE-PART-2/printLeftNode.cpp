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

void leftNodePrint(node* root)
{
   
if(root==NULL){
    return ;
}
if((root==NULL) || (root->left==NULL && root->right ==NULL) )
{
return ;
}
cout<<root->data<<" ";
if(root->left){
   leftNodePrint(root->left);
}
else{
    leftNodePrint(root->right);
}
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
}

int main()
{
    node* root=NULL;
    //creating TREE
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    leftNodePrint(root);
    cout<<endl;
     
    return 0;
}
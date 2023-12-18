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

node* insertIntoBST(node* root,int data)
{
 if(root==NULL){
   root=new node(data);
   return root;
 }
 if(root->data > data)
 {
  
  cout<<"ENTER THE DATA IN THE LEFT :- "<<endl;
  root->left=insertIntoBST(root->left,data);
 }
 if(root->data < data){
    cout<<"ENTER THE DATA IN THE RIGHT :- "<<endl;
    root->right=insertIntoBST(root->right,data);
 }
return root;
}

bool isBST(node* root,int min,int max)
{
if(root==NULL)
{
return true;
}
if(root->data >= min && root->data <= max){
    bool left=isBST(root->left,min,root->data);
    bool right=isBST(root->right,root->data,max);

    return left && right;
}
else
{
    return false;
}
}

void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

int main()
{
    //10 8 21 7 27 5 4 3 -1

    node* root=NULL;
    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
    if(isBST(root,INT_MIN,INT_MAX)){
        cout<<"TREE IS BST "<<endl;
    }
    else{
        cout<<"TREE IS NOT BST "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
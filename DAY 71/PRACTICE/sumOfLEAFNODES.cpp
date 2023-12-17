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

void solve(node* root,int &sum)
{
  if(root==NULL)
  {
    return ;
  }
  solve(root->left,sum);
  if(root->left==NULL && root->right==NULL)
  {
    sum=sum+root->data;  
  }
  solve(root->right,sum);
}

int sumOfLeafNodes(node* root){
int sum=0;
solve(root,sum);
return sum;
}
int main()
{   //1 2 3 -1 -1 4 -1 -1 2 4 -1 -1 3 -1 -1
   //1 2 -1 3 -1 -1 2 -1 3 -1 -1
   //3 9 -1 -1 20 15 -1 -1 7 -1 -1 
    node* root=NULL;
    //creating node;
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"SUM OF LEAF NODE : "<<leftLeaf(root)<<endl;
    cout<<endl<<endl;

    return 0;
}
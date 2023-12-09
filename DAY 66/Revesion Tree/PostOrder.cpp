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
void postOrder(node* root)
{
   if(root==NULL)
   {
    return ;
   }

   postOrder(root->left);
   postOrder(root->right);
   cout<<root->data<<" ";
}
int main()
{
    node* root=NULL;
    cout<<endl<<endl;
    //creating TREE
    root=buildTree(root);
    cout<<endl;
    postOrder(root);
    cout<<endl<<endl;


    return 0;
}
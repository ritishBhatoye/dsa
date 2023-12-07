#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
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

    cout<<"Enter the data for inserting in left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}


int height(node* root){
    if(root==NULL){
        return 0;
    }
   
   int left=height(root->left);
   int right=height(root->right);
   int ans=max(left,right)+ 1;
   return ans;

}

int diameter(node* root){
    if(root==NULL){
        return 0;
    }

    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left) +1 + height(root->right);
    int ans=max(op1,max(op2,op3));

    return ans;
}

int main()
{
    node* root=NULL;
    //creating tree
    root=buildTree(root);

   //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<endl<<endl;
    cout<<"DIAMETER OF TREE : "<<diameter(root)<<endl;
    cout<<endl<<endl;


    return 0;
}
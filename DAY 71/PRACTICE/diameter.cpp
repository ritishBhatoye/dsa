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

int diameterOfTree(node* root){
    //base case
    int ans=0;
    if(root==NULL){
        return ans;
    }

    int leftAns=diameterOfTree(root->left);
    int rightAns=diameterOfTree(root->right);
    int op3=height(root->left) + 1 + height(root->right);

    ans=max(leftAns,max(rightAns,op3));

    return ans;
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
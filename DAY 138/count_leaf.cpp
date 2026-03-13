#include<iostream>
using namespace std;

class node
{

    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildTree(node* root)
{
    int d;
    cout<<"Enter the data :- ";
    cin>>d;

    if(d==-1)
        return NULL;

    root = new node(d);

    cout<<"Enter the data in the LEFT of  :- "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of :- "<<d<<endl;
    root->right = buildTree(root->right);

    return root;
    
}


int countLeafNode(node* root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL  && root->right == NULL)
        return 1;

        int leftAns , rightAns;
   
    
        leftAns = countLeafNode(root->left);
     rightAns = countLeafNode(root->right);
    

   
      
    return leftAns + rightAns ;
    
}





int main()
{
// 1 2 4 7 -1 11 -1 13 -1 -1 -1 5 8 -1 -1 9 -1 -1 3 -1 6 -1 10 12 -1 -1 -1
    
    node* root = NULL;

    root = buildTree(root);
    cout<<endl<<endl;
    cout<<"Leaf Nodes :- "<<countLeafNode(root)<<endl;;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
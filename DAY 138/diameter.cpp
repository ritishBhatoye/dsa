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


int height(node* root)
{
    if(root == NULL)
        return 0;

    int leftAns =  height(root->left);
    int rightAns = height(root->right);

    return max(leftAns,rightAns) + 1;
}


int diameter(node* root)
{
    if(root==NULL)
        return 0;

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);

    int op3 = height(root->left) + height(root->right) +1;

    return max(op1,max(op2,op3));
}



int main()
{
// 1 2 4 7 -1 11 -1 13 -1 -1 -1 5 8 -1 -1 9 -1 -1 3 -1 6 -1 10 12 -1 -1 -1
    
    node* root = NULL;

    root = buildTree(root);
    cout<<endl<<endl;
    cout<<"Diamter :- "<<diameter(root)<<endl;;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
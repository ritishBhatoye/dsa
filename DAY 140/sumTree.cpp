#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left = NULL;
        this->right =NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter the data :- ";
    int d;
    cin>>d;

    if(d==-1)
        return NULL;

    root = new node(d);

    cout<<"Enter the data in the LEFT OF  :- "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of :- "<<d<<endl;
    root->right = buildTree(root->right);

    return root;
    
}


bool sumTree(node* root)
{
    if(root==NULL)
        return true;

    if(root->left==NULL && root->right==NULL)
        return true;
    if(root->data == root->left->data + root->right->data)
        return false;

    bool left = sumTree(root->left);
    bool right = sumTree(root->right);

    return left && right;

    
}

int main()
{
    // 14 -1 13 -1 10 -1 9 -1 8 -1 4
    //10 20 10 -1 -1 10 -1 -1 30 -1 -1
    // 1 2 4 8 -1 -1 -1 5 6 -1 7 -1 -1 -1 3 -1 -1 

    // true
    // 10 20 40 -1 -1 60 -1 -1 30 -1 -1

    //false
    // 1 2 4 5 -1 -1 -1 -1 3 -1 -1


    node* root = NULL;
    root = buildTree(root);

    cout<<endl<<endl;
    if(sumTree(root))
        cout<<"Sum Tree"<<endl;
    else
        cout<<"IS NOT SUM TREE"<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
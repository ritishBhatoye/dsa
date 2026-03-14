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
        this->data = d;
        this->left = NULL;
        this->right = NULL;
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

    cout<<"Enter the data in the LEFT of "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of "<<d<<endl;
    root->right =  buildTree(root->right);

    return root;
}

bool sumTree(node* root)
{
    if(root == NULL)
        return true;

    // int sum = 

    // if(root->data != sum )
    // {
    //     return false;
    // }

    bool leftAns = sumTree(root->left);
    bool rightAns = sumTree(root->right);

    bool 

    return leftAns && rightAns;

}


int main()
{
    //    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 FALSE
    // 3 1 -1 -1 2 -1 -1 TRUE
    // 26 10 4 0 0 6 0 0 3 0 3 0 0
    node* root = NULL;

    root = buildTree(root);
    cout<<endl<<endl;
    if(sumTree(root))
    {
        cout<<"Tree is comprised of SUM TREE PROPERTY "<<endl;
    }
    else
    {
        cout<<"Tree is NOT comprised of SUM TREE PROPERTY "<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;



    return 0;
}
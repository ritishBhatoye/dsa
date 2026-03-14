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
    cout<<"Enter the data in the tree :- ";
    int d;
    cin>>d;
    if(d==-1)
        return NULL;

    root=new node(d);

    cout<<"Enter the data in the LEFT of "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of "<<d<<endl;
    root->right = buildTree(root->right);

    return root;
}

bool isIdentical(node* r1,node* r2)
{
    if(r1==NULL && r2==NULL)
    {
        return true;
    }

    if(r1!=NULL && r2==NULL)
    {
        return false;
    }
    if(r1==NULL && r2!=NULL)
    {
        return false;
    }

    if(r1->data!=r2->data)
    {
        return false;
    }

    bool leftAns = isIdentical(r1->left,r2->left);
    bool rightAns = isIdentical(r1->right,r2->right);

    return leftAns && rightAns; 


}



int main()
{
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    node* r1 = NULL;
    node* r2 = NULL;
    cout<<endl<<endl;
    cout<<"Tree 1 "<<endl;
    r1=buildTree(r1);

    cout<<"Tree 2"<<endl;
    r2=buildTree(r2);


    cout<<endl<<endl;
    cout<<"Checking ..."<<endl;
    if(isIdentical(r1,r2))
    {
        cout<<"Trees are identical "<<endl;
    }
    else
    {
        cout<<"Trees are NOT identical "<<endl;
    }


    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    return 0;
}
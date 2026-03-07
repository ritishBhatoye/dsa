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
        this->right=NULL;
        this->left=NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Entert the data :- ";
    int d;
    cin>>d;

    if(d==-1)
        return NULL;


    root = new node(d);

    cout<<"Enter the data in the LEFT of "<<d<<" : "<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter the data in the RIGHT of "<<d<<" : "<<endl;
    root->right=buildTree(root->right);

    return root;

}

int height(node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);

    int right = height(root->right);

    int ans = max(left,right) + 1;

    return ans;

}



int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = NULL;
    root = buildTree(root);
    cout<<endl<<endl;
    
    int ans = height(root);
    cout<<endl<<endl;

    cout<<"Height :- "<<ans<<endl;
    cout<<endl<<endl;
    return 0;

}
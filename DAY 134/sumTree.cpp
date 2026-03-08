#include<iostream>
#include<utility>

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
        this->left=NULL;
        this->right=NULL;
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

    cout<<"Enter the data in the LEFT of "<<d<<" :- "<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of "<<d<<" :- "<<endl;
    root->right = buildTree(root->right);


    return root;

}


void inOrder(node* root)
{
    if(root==NULL)
        return ;


    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int sum(node* root)
{
    if(root==NULL)
        return root->data;

    

    int leftAns = sum(root->left);
    int rightAns =  sum(root->right);

    return (leftAns + rightAns);
}

bool sumTree(node* root)
{
    if(root==NULL)
        return true;

    int left = sum(root->left);
    int right = sum(root->right);
    cout<<"LEFT :- "<<left<<endl;
    cout<<"RIGHT :- "<<right<<endl;

    if(root->data != (left + right))
        return false;

    return true;
}

int main()
{
    // 3 9 -1 -1 20 15 -1 -1 7 -1 -1
//5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 -1 1 -1 -1
// 3 1 -1 -1 2 -1 -1
    node* root =  NULL;
    cout<<endl<<endl;

    root = buildTree(root);
    cout<<endl<<endl;
    
    if(sumTree(root))
    {
        cout<<"YES Sum Tree exists "<<endl;
    }
    else
    {
        cout<<"No Sum Tree exists  "<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
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


int height(node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right) + 1;

}

int diameter(node* root)
{
    if(root==NULL)
        return ;

    int op1 = diameter(root->left);
    int op2 = diamter(root->right);
    int op3 = height(root->right) + height(root->left) ;
}

int main()
{
    // 1 -1 3 2 -1 -1 4 5 -1 -1 -1 
    node* root = NULL;
    root = buildTree(root);
    cout<<endl<<endl;
    cout<<"Height of the Tree :- "<<height(root)<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
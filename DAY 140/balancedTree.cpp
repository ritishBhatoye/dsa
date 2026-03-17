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

    return max(left,right)+1;
}

bool isBalanced(node* root)
{
    if(root==NULL)
        return true;

    if(root->left ==NULL && root->right)
        return true;

    
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    bool checkIsBalanced = abs(height(root->left) - height(root->right)) <=1;

    return left && right && checkIsBalanced;

}



int main()
{
    // 1 2 4 8 -1 -1 -1 5 6 -1 7 -1 -1 -1 3 -1 -1 

    // true
    // 10 20 40 -1 -1 60 -1 -1 30 -1 -1

    //false
    // 1 2 4 5 -1 -1 -1 -1 3 -1 -1


    node* root = NULL;
    root = buildTree(root);
    cout<<endl<<endl;
    if(isBalanced(root))
        cout<<"Tree is Balanced "<<endl;
    else
        cout<<"Tree is NOT balaned "<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
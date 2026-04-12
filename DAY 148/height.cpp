#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data =  data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout<<"Enter the data :- ";

    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    root = new Node(d);

    cout<<"Enter the data for the left :- "<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for the right :- "<<endl;
    root->right = buildTree(root->right);

    return root;
}
//NLR
void preOrder(Node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//LNR

void inOrder(Node* root)
{
    if(root==NULL)
        return ;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

//LRN
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
void postOrder(Node* root)
{
    if(root==NULL)
        return ;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int countLeaf(Node* root)
{
    if(root==NULL)
        return 0;
    if(root->right == NULL && root->left==NULL && root!=NULL)
    {
        return 1;
    }

    int left = countLeaf(root->left);
    int right = countLeaf(root->right);

    return left+right;
}
int height(Node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right) + 1;
}

int main()
{
    Node* root = NULL;
    // 50 30 15 -1 -1 10 -1 -1 20 8 -1 -1 5 -1 -1
    // 1 2 -1 -1 3 -1 -1 
    cout<<endl<<endl;
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"Pre Order :- ";
    preOrder(root);
    cout<<endl<<endl;
   
    cout<<endl<<endl;
    cout<<"In Order :- ";
    inOrder(root);
    cout<<endl<<endl;
    cout<<"Post Order :- ";
    postOrder(root);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<countLeaf(root)<<endl;
    cout<<endl<<endl;


    return 0;

}
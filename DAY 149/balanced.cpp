#include<iostream>
#include <cstdlib> 
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout<<"Enter the node :- ";
    
    int d;
    cin>>d;

    if(d==-1)
        return NULL;

    root = new Node(d);

    cout<<"Enter the node in the left of "<<d<<" :- "<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the node in the right of "<<d<<" :- "<<endl;
    root->right = buildTree(root->right);

    return root;
}

void preOrder(Node* root)
{
    if(root==NULL)
        return ;


    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root)
{
    if(root==NULL)
        return ;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if(root==NULL)
        return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int height(Node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right)+1;
}

// bool checkBal(Node* root)
// {
//     if(root==NULL)
//         return true;

//         bool left = checkBal(root->left);
//         bool right = checkBal(root->right);

//         bool check = abs(height(root->left) - height(root->right)) <=1;
// }

pair<bool,int> isBalanced(Node* root)
{
    if(root==NULL)
    {
        pair<bool,int> ans = make_pair(true,0);
        return ans;
    }

    pair<bool,int> left = isBalanced(root->left);
    pair<bool,int> right = isBalanced(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool check = abs(left.second - right.second) <=1;

    pair<bool,int> ans;
    ans.second  = max(left.second , right.second)+1;
    if(leftAns && rightAns && check)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }

    return ans;
}



int main()

{
    Node* root = NULL;
    cout<<endl<<endl;
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    cout<<endl<<endl;
    root = buildTree(root);
    cout<<"Pre Order :- "<<endl;
    preOrder(root);
    cout<<"In Order :- "<<endl;
    inOrder(root);
    cout<<"Post Order :- "<<endl;
    postOrder(root);
    cout<<endl<<endl;
    cout<<"Height of tree :- "<<height(root)<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    if(isBalanced(root).first)
    {
        cout<<"Tree is balanced "<<endl;
    }
    else
    {
        cout<<"Tree is NOT balanced"<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
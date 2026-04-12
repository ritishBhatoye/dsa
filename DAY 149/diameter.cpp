#include<iostream>
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

int diameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int left = diameter(root->left);
    int right = diameter(root->right);

    int op3= height(root->left)+height(root->right) +1;
    
    return max(left,max(right,op3));
}

pair<int,int> fastDiameter(Node* root)
{
    if(root==NULL)
    {
        pair<int,int> ans = make_pair(0,0);
        return ans;
    }

    pair<int,int> left = fastDiameter(root->left);
    pair<int,int> right = fastDiameter(root->right);

    int op1 = left.first;
    int op2 = right.first;

    int op3 = left.second + right.second + 1;

    pair<int,int> ans;

    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second) + 1;

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
    cout<<"Diameter of tree :- "<<diameter(root)<<endl;
    cout<<endl<<endl;
    cout<<"Optimized Diameter Of tree :- "<<fastDiameter.first(root)<<endl;
    cout<<endl<<endl;
    
    cout<<endl<<endl;

    return 0;
}
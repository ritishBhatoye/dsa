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


// tree is balanced when height of left sub tree and right is <= 1 (or more than one)

int height(node* root)
{
    //base case if there is not child further then return 0 height for that node
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right) + 1;

}

//brute force
bool isBalancedBrute(node* root)
{
    // as it is having no further child that is height is less than or eqauls to 1 CONDITION IS STASIFIED ; 

    if(root==NULL)
        return true;

    
    bool left = isBalancedBrute(root->left);
    bool right = isBalancedBrute(root->right);

    bool diff =  abs(height(root->left) - height(root->right)) <= 1;

    return left && right && diff;
    
}

//OPTIMIZED
pair<bool,int> checkingBalanced(node* root)
{
    if(root==NULL)
    {
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    pair<bool,int> left = checkingBalanced(root->left);
    pair<bool,int> right = checkingBalanced(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;
    
    pair<bool,int> ans;

    bool diff = abs(left.second - right.second) <= 1;

    if(leftAns && rightAns & diff)
    {
        ans.first=true;
    }
    else
    {
        ans.first=false;
    }

    return ans;

}

bool isBalanced(node* root)
{
    return checkingBalanced(root).first;
}

int main()
{
    // 3 9 -1 -1 20 15 -1 -1 7 -1 -1
    node* root =  NULL;
    cout<<endl<<endl;

    root = buildTree(root);
    cout<<endl<<endl;
    if(isBalanced(root))
    {
        cout<<"TREE IS BALANCED"<<endl;
    }
    else
    {
        cout<<"TREE IS NOT BALANCED"<<endl;

    }
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
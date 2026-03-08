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


int maxSum(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int sum = root->data;

    int left = sum + maxSum(root->left);
    int right = sum + maxSum(root->right);

    return max(left,right);
}

int pathSum(node* root,int k)
{
    int sum = root->data;

    if(k == sum)
        return true;

    int leftEval = sum + root->left->data;
    int rightEval = sum + root->right->data;

    int ans = sum;

    if(leftEval > sum)
    {
        ans += pathSum(root->right,k);
    }
    else
    {
        ans += pathSum(root->left,k);
    }


    if(ans==k)
    {
        return 1;
    }
    else
    {
        return ans;
    }
}

bool checkPathSum(node* root,int k)
{
    if(pathSum(root,k)==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // 3 9 -1 -1 20 15 -1 -1 7 -1 -1
//5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 -1 1 -1 -1
    node* root =  NULL;
    cout<<endl<<endl;

    root = buildTree(root);
    cout<<endl<<endl;
    
    if(checkPathSum(root,22))
    {
        cout<<"Path Sum exists "<<endl;
    }
    else
    {
        cout<<"Path sum doesn't exist "<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
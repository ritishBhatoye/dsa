#include<iostream>
#include <utility>

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
        this->right = NULL;
    }
};



void preOrder(node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<<" ";
    //moving to left    
    preOrder(root->left);

    // moving to right
    preOrder(root->right);

}

void postOrder(node* root)
{
    if(root==NULL)
        return ;

   // moving to left
    postOrder(root->left);

    //moving to right 
    postOrder(root->right);

    cout<<root->data<<" ";
}

void inOrder(node* root)
{
    if(root==NULL)
        return ;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}


node* buildTree(node* root)
{
    cout<<"Enter the data :- ";
    int d;
    cin>>d;

    if(d==-1)
        return NULL;

    root = new node(d);

    cout<<"Enter the data in the left of the "<<d<<" :- "<<endl;
    root->left =  buildTree(root->left);

    cout<<"Enter the data in the right of the "<<d<<" :- "<<endl;
    root->right = buildTree(root->right);

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

int diameterBrute(node* root)
{
    if(root==NULL)
        return 0;

    int op1 = diameterBrute(root->left);
    int op2 = diameterBrute(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1,max(op2,op3));

    return ans;

}
// a tree is hieght balanced if the absolute height of the left and right is less than or eqaul to one 
pair<bool,int> isBalanced(node* root)
{
    if(root==NULL)
    {
        pair<bool,int> p =  make_pair(true,0);
        return p;
    }

    pair<bool,int> left = isBalanced(root->left);
    pair<bool,int> right =  isBalanced(root->right);

    bool leftAns =  left.first;
    bool rightAns = right.first;

    bool checkBalance = abs(left.second - right.second) <= 1;
    
    pair<bool,int> ans;
    ans.second = max(left.second,right.second) + 1;

    if(leftAns && rightAns && checkBalance)
    {
        ans.first = true;
    }

    else
    {
        ans.first = false;
    }

    return ans;

}

bool isIdentical(node* r1,node* r2)
{
    if(r1!=NULL && r2==NULL)
    {
        return true;
    }
    if(r1 !=NULL && r2== NULL)
    {
        return false;
    }
    if(r1 ==NULL && r2 != NULL)
    {
        return false;
    }
    bool left = isIdentical(r1->left,r2->left);
    bool right = isIdentical(r1->right,r2->right);

    bool check = r1->data == r2->data;

    return left && right && check;

}

int main()
{
    // 10 20 40 -1 -1 60 -1 -1 30 -1 -1
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // 1 2 4 5 -1 -1 -1 -1 3 -1 -1
    node* r1 = NULL;
    node* r2 = NULL;
    cout<<endl<<endl;
    // 1 2 4 -1 -1 -1 3 -1 -1
   // 1 2 -1 -1 3 4 -1 -1 -1
    r1=buildTree(r1);

    cout<<endl<<endl;
    r2 =  buildTree(r2);

    // int ans = diameterBrute(root);

    // cout<<"Ans Diameter :- "<<ans<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;


    if(isIdentical(r1,r2))
    {
        cout<<"Trees are Identical"<<endl;
    }
    else
    {
        cout<<"Trees are NOT Identical"<<endl;
    }

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
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

pair<bool,int> sumTree(node* root)
{
    if(root==NULL)
    {
        pair<bool,int> p =  make_pair(true,0);
        return p;
    }
    if(root->left == NULL && root->right==NULL)
    {
        pair<bool,int> p = make_pair(true,root->data);
        return p;
    }

    pair<bool,int> left = sumTree(root->left);
    pair<bool,int> right = sumTree(root->right);

    bool leftAns =  left.first;
    bool rightAns = right.first;

    bool check = root->data ==  left.second +  right.second;

    pair<bool,int> ans;


    if(leftAns && rightAns && check)
    {
        ans.first = true;
        ans.second = 2 * root->data;

    }
    else
    {
        ans.first = false;
    }

    return ans;

}



int main()
{
    // 10 20 40 -1 -1 60 -1 -1 30 -1 -1
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // 1 2 4 5 -1 -1 -1 -1 3 -1 -1
    node* root = NULL;
    cout<<endl<<endl;
    // 1 2 4 -1 -1 -1 3 -1 -1
   // 1 2 -1 -1 3 4 -1 -1 -1
    root=buildTree(root);

    cout<<endl<<endl;

    // int ans = diameterBrute(root);

    // cout<<"Ans Diameter :- "<<ans<<endl;
    // 10 20 10 -1 -1 10 -1 -1 30 -1 -1
    // 3 1 -1 -1 2 -1 -1
    cout<<endl<<endl;
    cout<<endl<<endl;


    if(sumTree(root).first)
    {
        cout<<"Tree is SUM TREE"<<endl;
    }
    else
    {
        cout<<"Tree is NOT SUM TREE"<<endl;
    }

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
#include<iostream>
#include<queue>

using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildTree(node* root)
{
    int d;
    cout<<"Enter the data :- ";
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    root = new node(d); 

    cout<<"Enter the data for the left :- "<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for the right :- "<<endl;
    root->right = buildTree(root->right);

    return root;
}

//pre order
void preOrder(node* root)
{
    if(root == NULL)
        return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

// post order 
void postOrder(node* root)
{
    if(root==NULL)
        return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

// in Order
void inOrder(node* root)
{
    if(root==NULL)
        return ;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void levelOrder(node* root)
{
    if(root==NULL)
        return ;

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();

        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }


    }

}

int countLeaf(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->right == NULL && root->left == NULL)
    {
        return 1;
    }

    return countLeaf(root->left) + countLeaf(root->right);
}

pair<int,int> diameter(node* root)
{
    if(root==NULL)
    {
        pair<int,int> p =  make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameter(root->left);
    pair<int,int> right = diameter(root->right);

    int leftAns= left.first;
    int rightAns =  right.first;

    int op3 = left.second + right.second +1;

    pair<int,int> ans;

    ans.first = max(leftAns,max(rightAns,op3));
    ans.second = max(left.second,right.second)+1;

    return ans;

}

int height(node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right)+1;
}

//Balanced Tree : -  tree in which each node has height diff is less than or eqaul to 1. 

pair<bool,int> balanced(node* root)
{
    if(root==NULL)
    {
        pair<bool,int> p = make_pair(true,0);

        return p;
    }

    if(root->left == NULL && root->right==NULL)
    {
        pair<bool,int> p = make_pair(true,1);

        return p;
    }

    pair<bool,int> left = balanced(root->left);
    pair<bool,int> right = balanced(root->right);

    bool leftAns = left.first;
    bool rightAns =  left.first;

    bool check = abs(left.second- right.second) <= 1;

    pair<bool,int> ans;
    ans.second = max(left.second , right.second) +1;
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
    cout<<endl<<endl;
    // 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
    cout<<endl<<endl;
//True
//10 20 40 -1 -1 60 -1 -1 30 -1 -1

//False
//1 2 4 5 -1 -1 -1 -1 3 -1 -1
    node* root = NULL;
    root = buildTree(root);
    cout<<endl<<endl;
    cout<<"Level Order :- ";
    levelOrder(root);
    cout<<endl<<endl;
    cout<<"Pre Order :- ";
    preOrder(root);
    cout<<endl<<endl;
    cout<<"Post Order :- ";
    postOrder(root);
    cout<<endl<<endl;
    cout<<"In Order :- ";
    inOrder(root);
    cout<<endl<<endl;
    cout<<"Count Leaf Nodes :- "<<countLeaf(root)<<endl;
    cout<<endl<<endl;
    cout<<"Height :- "<<height(root)<<endl;
    cout<<endl<<endl;
    cout<<"Diameter :- "<<diameter(root).first<<endl;
    cout<<endl<<endl;
    if(balanced(root).first)
    {
        cout<<"Tree is balanced "<<endl;
    }
    else
    {
        cout<<"Tree is NOT balanced "<<endl;
    }

    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
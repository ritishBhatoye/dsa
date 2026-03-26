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

int main()
{
    cout<<endl<<endl;
    // 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
    cout<<endl<<endl;

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

    return 0;
}
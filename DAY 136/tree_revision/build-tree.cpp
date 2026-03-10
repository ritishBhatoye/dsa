#include<iostream>
#include<queue>


using namespace std;

class node{
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
    cout<<"Enter the data :- ";
    int d;
    cin>>d;
    
    if(d==-1)   
        return NULL;

    root = new node(d);

    //left
    cout<<"Enter the data for the left of "<<d<<endl;
    root->left=buildTree(root->left);

    // right 

    cout<<"Enter the data for the right of "<<d<<endl;
    root->right=buildTree(root->right);

    return root;
}

// traversals
void inOrder(node* root)
{
    // LNR

    if(root==NULL)
        return ;

    //moving to left
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

void postOrder(node* root)
{
    if(root==NULL)
        return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

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
/// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    node* root=NULL;
    root=buildTree(root);

    cout<<"In Order traversal :- ";
    inOrder(root);

    cout<<endl<<endl;
    cout<<"Pre Order Traversal :- ";
    preOrder(root);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Post Order Traversal :- ";
    postOrder(root);

    cout<<endl<<endl;
    cout<<"Level Order Traversal :- ";
    levelOrder(root);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
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
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }

};
node* buildTree(node* root)
{
    cout<<"Enter the data :- ";
    int d;
    cin>>d;

    root= new node(d);

    if(d==-1)
        return NULL;

    cout<<"Enter the data in the LEFT of "<<d<<" :- "<<d<<endl;

    root->left = buildTree(root->left);
    
    cout<<"Enter the data in the RIGHT of "<<d<<" :- "<<endl;
    
    root->right = buildTree(root->right);

    return root;
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

        cout<<temp->data<<" ";

        q.pop();

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

// In order traversel LNR

void inOrder(node* root)
{
    if(root==NULL)
        return ;

    //move towards left
    inOrder(root->left);
    
    // Print Node
    cout<<root->data<<" ";

    inOrder(root->right);
}

// Pre Order  traversal NLR

void preOrder(node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<<" ";

    //move towards left
    preOrder(root->left);
    //move towards right
    preOrder(root->right);

}

//Post Order traversal LRN
void postOrder(node* root)
{
    if(root==NULL)
        return ;

    //move to left
    postOrder(root->left);
    //move to right 
    postOrder(root->right);

    cout<<root->data<<" ";
}

int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<endl<<endl;
    node* root=NULL;

    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"Printing level order traversal :- ";
    cout<<endl<<endl;
    levelOrder(root);
    cout<<endl<<endl;
    cout<<"Printing InOrder traversal :- ";
    cout<<endl<<endl;
    inOrder(root);
    cout<<endl<<endl;

    cout<<"Printing PreOrder traversal :- ";
    cout<<endl<<endl;
    preOrder(root);
    cout<<endl<<endl;
    cout<<"Printing PostOrder traversal :- ";
    cout<<endl<<endl;
    postOrder(root);

    cout<<endl<<endl;

    return 0;
}
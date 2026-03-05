#include<iostream>
#include<queue>

using namespace std;

class node
{
public:
int data;
node* right;
node* left;

node(int data)
{
    this->data=data;
    this->right=NULL;
    this->left=NULL;
}
};


node* buildTree(node* root)
{
    cout<<"Enter the data :- ";
    int d;
    cin>>d;

    if(d==-1)
        return NULL;

    root=new node(d);

    cout<<"Enter the data at the LEFT of "<<d<<" :- ";
    root->left=buildTree(root->left);


    cout<<"Enter the data at the RIGHT of "<<d<<" :- ";
    root->right=buildTree(root->right);

    return root;
    
}


void levelOrder(node* root)
{
    queue <node*> q;
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
        if(temp->right){
            q.push(temp->right);
        }
    }

}

// NLR
void preOrder(node* root)
{
    if(root==NULL)
        return ;

    
    cout<<root->data<<" ";

    //moving to left
    preOrder(root->left);

    //moving to right

    preOrder(root->right);

}

void inOrder(node* root)
{
    if(root==NULL)
        return ;

    //movint to left

    inOrder(root->left);

    cout<<root->data<<" ";

    //movint to right

    inOrder(root->right);
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

int main()
{

    cout<<endl<<endl;
    node* root=NULL;

    root = buildTree(root);
    cout<<endl<<endl;
    cout<<"Printing the Level Order traversal :- ";
    cout<<endl<<endl;

    levelOrder(root);
    cout<<"Printing the In order traversal :- ";
    cout<<endl<<endl;

    inOrder(root);
    cout<<endl<<endl;
    cout<<"Printing the Pre Order traversal :- ";
    cout<<endl<<endl;
    preOrder(root);
    cout<<endl<<endl;
    cout<<"Printing the Post Order traversal :- ";
    cout<<endl<<endl;
    postOrder(root);
    cout<<endl<<endl;
    
    return 0;
}
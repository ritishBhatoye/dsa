#include<iostream>
#include<queue>

using namespace std;

class  node
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
    {
        return NULL;
    }

    root =  new node(d);


    cout<<"Enter data in the left of "<<d<<endl;
    root->left=buildTree(root->left);

    cout<<"Ente the data in the right of "<<d<<endl;
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

        q.pop();

        cout<<temp->data<<" ";

        if(temp->left)
        {
            levelOrder(temp->left);
        }
        
        if(temp->right)
        {
            levelOrder(temp->right);
        }   

    }
    
}

//in order level

void inOrder(node* root)
{
    if(root==NULL)
        return ;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

// pre order level
void preOrder(node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
//post order level
void postOrder(node* root)
{
    if(root==NULL)
        return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


/// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 

int main()
{
    node* root = NULL;
    root =  buildTree(root);

    cout<<endl<<endl;
    cout<<"Level order :- "<<endl;
    levelOrder(root);

    cout<<endl<<endl;
    cout<<"Pre Order Level :- "<<endl;
    preOrder(root);
    cout<<endl<<endl;
    cout<<"In Order Level :- "<<endl;
    inOrder(root);
    cout<<endl<<endl;
    cout<<"Post Order Level :- "<<endl;
    postOrder(root);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
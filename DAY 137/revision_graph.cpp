#include<iostream>
#include<queue>
#include<stack>

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

void preOrderIterative(node* root)
{
    if(root==NULL)
        return ;

    stack<node*> s;

    s.push(root);

    while(!s.empty())
    {
        node* temp =  s.top();

        cout<<temp->data<<" ";

        s.pop();

        if(temp->right)
        {
            s.push(temp->right);
        }

        if(temp->left)
        {
            s.push(temp->left);
        }
       

    }
}

void inOrderIterative(node* root)
{
    if(root==NULL)
        return ;

    stack<node*> s;
    s.push(root);

    while(root->left!=NULL)
    {

        s.push(root->left);
        if(root->left!=NULL)
        {
        root=root->left;

        }

    }

    while(!s.empty())
    {
        node* temp = s.top();

        s.pop();

        cout<<temp->data<<" ";


        if(temp->right!=NULL)
        {
            s.push(temp->right);
            if(temp->right!=NULL)
            {
                temp=temp->right;
            }
        }
        if(temp->left!=NULL)
        {
            s.push(temp->left);
            if(temp->left!=NULL)
            {
                temp=temp->left;
            }
        }
    }
    
}


void postOrderIterative(node* root)
{
    stack<node*> s;
    s.push(root);

    while(root->left!=NULL)
    {
        s.push(root->left);
        root=root->left;
    }

    while(!s.empty())
    {
        node* temp = s.top();

        if(temp->right!=NULL)
        {
            s.push(temp->right);
            if(temp->right!=NULL)
            {
                temp=temp->right;
            }

        }

        if(temp->left!=NULL)
        {
            s.push(temp->left);
            
            if(temp->left!=NULL)
            {
                temp=temp->left;
            }
        }

        s.pop();

        cout<<temp->data<<" ";
 
    }
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
    cout<<"Pre Order Level Iterative :- "<<endl;

    preOrderIterative(root);
    cout<<endl<<endl;

    cout<<"In Order Level :- "<<endl;
    inOrder(root);
    cout<<endl<<endl;
    cout<<"In Order Level Iterative :- "<<endl;

    inOrderIterative(root);
    cout<<endl<<endl;

    cout<<"Post Order Level :- "<<endl;
    postOrder(root);
    cout<<endl<<endl;
    cout<<"Post Order Level Iterative :- "<<endl;
    postOrderIterative(root);
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
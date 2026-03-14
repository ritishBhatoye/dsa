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
    cout<<"Enter the data :- ";
    int d;
    cin>>d;
    
    if(d==-1)
        return NULL;

    root = new node(d);

    cout<<"Enter the data in the LEFT of "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of "<<d<<endl;
    root->right =  buildTree(root->right);

    return root;
}

int height(node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right  = height(root->right);

    return max(left,right) +1;
}

//LRN
void postOrder(node* root)
{
    if(root==NULL)
        return ;

     postOrder(root->left);
     postOrder(root->right);
     cout<<root->data<<" ";


}

//NLR
void preOrder(node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void zigZagTraversal(node* root)
{

    queue<node*> q;

    bool lr;
    q.push()
    while()

   

}



int main()
{
    //    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 FALSE
    // 3 1 -1 -1 2 -1 -1 TRUE
    // 26 10 4 0 0 6 0 0 3 0 3 0 0
    // 1 2 3 -1 -1 5 -1 -1 4 -1 6 7 -1 -1 8 -1 -1 
    node* root = NULL;

    root = buildTree(root);
    cout<<endl<<endl;
    zigZagTraversal(root);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;



    return 0;
}
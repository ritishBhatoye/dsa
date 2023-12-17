#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* insertIntoBST(node* root,int d){
    //BASE CASE
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }
    
    if(d > root->data)
    {
     cout<<"ENTER THE DATA FOR INSERTING IN THE RIGHT OF BST :- "<<endl;
     root->right=insertIntoBST(root->right,d);
    }
    else
    {
       cout<<"ENTER THE DATA FOR INSERTING IN THE LEFT OF BST :- "<<endl;
       root->left=insertIntoBST(root->left,d);
    }
    return root;
}
void takeInput(node* &root)
{
    cout<<"ENTER THE DATA : "<<endl;
int data;
cin>>data;
while(data!=-1){
    root=insertIntoBST(root,data);
    cin>>data;
}
}

void lvlOrder(node* root){ 
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

       if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
       }
       else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right)
        {
          q.push(temp->right);
        }
       }

    }
}
void inOrder(node* root){
    //base case
    if(root==NULL){
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root=NULL;
    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
    //10 8 21 7 27 5 4 3 -1
    cout<<"PRINTING BST USING LVL ORDER : "<<endl;
    lvlOrder(root);
    cout<<endl<<endl;
    cout<<"PRINTING BST USING PRE ORDER : "<<endl;
    preOrder(root);
    cout<<endl<<endl;
    cout<<"PRINTING BST USING POST ORDER : "<<endl;
    postOrder(root);
    cout<<endl<<endl;
    cout<<"PRINTING BST USING IN ORDER : "<<endl;
    inOrder(root);
    cout<<endl<<endl;
    
    return 0;
}
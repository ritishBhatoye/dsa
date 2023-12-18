#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* insertIntoBST(node* root,int data){
    //base case
    if(root==NULL){
        cout<<"ENTER THE DATA :- "<<endl;
        root=new node(data);
        return root;
    }
    if(data > root->data){
        cout<<"ENTER THE DATA IN THE RIGHT :- "<<endl;
        root->right=insertIntoBST(root->right,data);
    }
    else{
        cout<<"ENTER THE DATA IN THE LEFT :- "<<endl;
        root->left=insertIntoBST(root->left,data);
    }
    return root;
}
void takeInput(node* &root){
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
    else
    {
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
 
    }
}
}

node* min(node* root)
{
   node* temp=root;
   while(temp->left!=NULL){
    temp=temp->left;
   }
   return root;
}


node* max(node* root){
    node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return root;
}

node* deleteFromBST(node* root,int val)
{
if(root==NULL){
    return NULL;
}
if(root->data == val){
    //deletion logic
    //1 child 

    if(root->left!=NULL && root->right==NULL)
    {
        node* temp=root->left;
        delete root;
        return temp;
    }
    if(root->left==NULL && root->right!=NULL)
    {
        node* temp=root->right;
        delete root;
        return temp;
    }
    
    //2 child

    if(root->left !=NULL && root->right!=NULL){
        int mini=min(root->right)->data;
        root->data=mini;
        root->right=deleteFromBST(root->right,mini);
        return root;
    }

}
else if(root->data > val){
    root->left=deleteFromBST(root->left,val);
    return root;
}
else
{
   root->right=deleteFromBST(root->right,val);
   return root;
}
}

int main(){
    //10 8 21 7 27 5 4 3 -1
    node* root=NULL;
    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
    lvlOrder(root);
    cout<<"AFTER DELETING :- "<<endl;
    root=deleteFromBST(root,4);
    cout<<endl<<endl;
    lvlOrder(root);
    cout<<endl;

    return 0;
}
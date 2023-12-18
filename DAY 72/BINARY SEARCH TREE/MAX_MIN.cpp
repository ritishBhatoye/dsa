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
node* insertIntoBST(node* root,int d){
    if(root==NULL)
    {
    root=new node(d);
    return root;
    }

    if(d>root->data)
    {
       cout<<"ENTER THE DATA FOR INSERTING IN THE RIGHT :- "<<endl;
       root->right=insertIntoBST(root->right,d);
    }
    else
    {
        cout<<"ENTER THE DATA FOR INSERTING IN THE LEFT :- "<<endl;
        root->left=insertIntoBST(root->left,d);
    }
return root;
}


void takeInput(node* &root){
    int data;
    cout<<"ENTER THE DATA : "<<endl;

    cin>>data;
    while(data!=-1)
    {
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
         if(!q.empty()){q.push(NULL);}
        }
        else{
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

node* min(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

node* max(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

int main(){
    cout<<endl<<endl;

    node* root=NULL;
    //10 8 21 7 27 5 4 3 -1
    
    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
    lvlOrder(root);
    cout<<endl<<endl;
    
    cout<<"MIN VALUE : "<<min(root)->data<<endl;
    cout<<"MAX VALUE : "<<max(root)->data;


    cout<<endl<<endl;
    //10 8 21 7 27 5 4 3 -1
    return 0;
}
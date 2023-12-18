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

bool search(node* root,int data){
    //base case
    bool ans;
    if(root==NULL)
    {
        return false;
    }
    if(data==root->data){
        return true;
    }

    if(data > root->data){
       ans= search(root->right,data);
    }
    else if(data < root->data){
       ans= search(root->left,data);
    }
    return ans;
}

int main(){
    cout<<endl<<endl;

    node* root=NULL;
    
    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
    lvlOrder(root);
    cout<<"ENTER THE NODE TO SEARCH :- "<<endl;
    int data;
    cin>>data;
   if(search(root,data)){
    cout<<data<<" IS PRESENT IN THE TREE "<<endl;
   }
   else{
    cout<<data<<" IS NOT PRESENT IN THE TREE "<<endl;

   }
    cout<<endl<<endl;
    //10 8 21 7 27 5 4 3 -1
    return 0;
}
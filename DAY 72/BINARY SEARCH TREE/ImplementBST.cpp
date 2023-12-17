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
    if(root==NULL){
        cout<<"ENTER THE DATA :- "<<endl;
        root=new node(d);
        return root;
    }
    if(d > root->data){
        root->right=insertIntoBST(root->right,d);
    }
    else{
      root->left=insertIntoBST(root->left,d);
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

void levelOrder(node* root){
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
        if(temp->right){
            q.push(temp->right);
        }
    }
}


}
int main()
{
    node* root=NULL;
    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
    cout<<"PRINTING ALL BINARY SEARCH TREE :- "<<endl;
    levelOrder(root);
    cout<<endl<<endl;
    //10 8 21 7 27 5 4 3 -1

    return 0;
}
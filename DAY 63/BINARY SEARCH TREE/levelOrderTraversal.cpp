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
        this->right=NULL;
        this->left=NULL;
    }
};

 void levelOrderTraversal(node* root){
    queue<node*> q;
  q.push(root);
  q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){//purana level completly traverse ho chuka hai
            
            cout<<endl;
            if(!q.empty()){//queue still has child nodes
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
node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
int main(){

    node* root=NULL;
    
    //creating a Tree
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    return 0;
}
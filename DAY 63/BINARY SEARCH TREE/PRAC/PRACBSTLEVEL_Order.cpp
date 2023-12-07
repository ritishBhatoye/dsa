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

node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1){
        return NULL;

    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
} 

int main()
{
    node* root=NULL;
    //create T
    root=buildTree(root);
    cout<<"PRINTING THE LEVEL OF TRAVERSAL ORDER "<<endl;
    levelOrderTraversal(root);
    return 0;
}
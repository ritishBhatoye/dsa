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
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(root->data < data){
        cout<<"ENTER THE DATA IN THE RIGHT :- "<<endl;
        root->right=insertIntoBST(root->right,data);
    }
    else
    {
        cout<<"ENTER THE DATA IN THE LEFT :- "<<endl;
        root->right=insertIntoBST(root->left,data);
    }
    return root;

}
//5 4 2 3 8 6 7 10 -1

void takeInput(node* &root)
{
int data;
cin>>data;
while(data!=-1){
    root=insertIntoBST(root,data);
    cin>>data;
}
}

pair<int,int> pre_Suc(node* root,int key){
    int succ=-1,pred=-1;
    node* temp=root;
    while(temp->data!=key){
        if(temp->data > key){
            succ=temp->data;
            temp=temp->left;
        }
        else
        {
            pred=temp->data;
            temp=temp->right;
        }
    }
    
    if(temp){
        node* leftTree=temp->left;

        while(leftTree){
            pred=leftTree->data;
            leftTree=leftTree->right;
        }
        
        node* rightTree=temp->right;

        while(rightTree){
            succ=rightTree->data;
            rightTree=rightTree->left;
        }
    }
return {pred,succ};
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
int main()
{
    node* root=NULL;
    //10 8 21 7 27 5 4 3 -1

    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
   // lvlOrder(root);
    cout<<endl<<endl;
    cout<<"K-TH SMALLEST ELEMENT :- "<<kthSmallest(root,2)<<endl;
    cout<<endl<<endl;

    return 0;
}
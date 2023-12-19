#include<iostream>
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


node* insertIntoBST(node* root,int data)
{
   if(root==NULL){
    root=new node(data);
    return root;
   }

   if(root->data < data)
   {  
      cout<<"ENTER THE DATA IN THE RIGHT :- "<<endl;
      root->right=insertIntoBST(root->right,data);
   }
   
   if(root->data > data){
    cout<<"ENTER THE DATA IN THE RIGHT :- "<<endl;
    root->left=insertIntoBST(root->left,data);
   }
   return root;

}

void takeInput(node* &root)
{
  int data;
  cin>>data;
  while(data!=-1){
    root=insertIntoBST(root,data);
    cin>>data;
  }
}

void inOrder(node* root,vector<int> &ans){
    if(root==NULL){
        return ;
    }

    inOrder(root->left,ans);
    ans.push_back(root->data);
    inOrder(root->right,ans);

}
void inOrderP(node* root){
    if(root==NULL){
        return ;
    }

    inOrderP(root->left);
    cout<<root->data<<" ";
    inOrderP(root->right);

}
node* inOrderToBST(int s,int e ,vector<int> ans){
    //base case
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;

    node* root=new node(ans[mid]);
    root->left=inOrderToBST(s,mid-1,ans);
    root->right=inOrderToBST(mid+1,e,ans);
    return root;
}
node* balancedBST(node* root)
{
vector<int> ans;

inOrder(root,ans);

return inOrderToBST(0,ans.size()-1,ans);
}
int main()
{
    node* root=NULL;
    cout<<endl<<endl;
    takeInput(root);
    cout<<endl<<endl;
    node* ans=balancedBST(root);

    inOrderP(root);
    cout<<endl<<endl;

    return 0;
}
#include<iostream>
#include<queue>
#include<vector>
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
// void preOrder(node* root){
//     //base case
//     if(root==NULL)
//     {
//         return ;
//     }
   
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right); 

// }

// void postOrder(ndoe* root){
//     //base case
//     if(root==NULL){
//         return ;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting in the left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in the right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
vector<int> ZigZagTraversal(node* root){
    vector<int> result;

    if(root==NULL){
        return result;
    }

    queue<node*> q;
    q.push(root);

    bool leftToRight=true;

    while(!q.empty()){
        int size=q.size();

        vector<int> ans(size);

        for(int i=0;i<size;i++){
            node* frontNode=q.front();
            q.pop();

            int index=leftToRight?i:size-i-1;
            ans[index]=frontNode->data;
            if(frontNode->left)
            {
            q.push(frontNode->left);  
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }
        leftToRight=!leftToRight;
        for(auto i:ans){
            result.push_back(i);
        }
    }
    return result;

} 
int main(){
    node* root=NULL;
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    vector<int> ans;
    ans=ZigZagTraversal(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

   //7 9 8 10 -1 -1 9 -1 -1 8 -1 -1 7 6 -1 -1 -1
   //3 2 -1 -1 1 -1 -1
   //1 2 3 -1 -1 5 -1 -1 4 -1 6 7 -1 -1 8 -1 -1
    return 0;
}
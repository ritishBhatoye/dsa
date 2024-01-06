#include<bits/stdc++.h>
using namespace std;

int cnt(struct Node* root){
    if(root==NULL){
        return 0;
    }

int ans=1+cnt(root->left)+ cnt(root->right);
return ans;
} 

bool isCBT(struct Node* root,int i,int cnt)
{
if(root==NULL)
{
return true;
}
if(i>=cnt){
    return false;
}
else
{
  bool left=isCBT(root->left,2*i+1,cnt);
  bool right=isCBT(root->right,2*i+2,cnt);
  return (left && right);
}
}

bool isMaxOrder(struct Node* root)
{
 if(root->right==NULL && root->left==NULL){
    return true;
 }  
 if(root->right==NULL){
    return (root->data > root->left->data);
 }
 else{
    bool left=isMaxOrder(root->left);
    bool right=isMaxOrder(root->right);

    return (left && right && ((root->data > root->left->data )&&(root->data > root->right->data)));
 }
};

bool isHeap(struct Node* root){
    int totalCount=cnt(root);
    int index=0;
    if(isCBT(root,index,totalCount) && isMaxOrder(root)){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    
    return 0;
}
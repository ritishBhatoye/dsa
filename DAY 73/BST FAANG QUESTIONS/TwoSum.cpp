#include<iostream>
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

node* insertIntoBST(node* root,int data){
    if(root==NULL)
    {
        root=new node(data);
        return root;
    }
    
    if(root->data > data)
    {
      cout<<"ENTER THE DATA IN THE LEFT NODE :- "<<endl;
      root->left=insertIntoBST(root->left,data);
    }
    else
    {
      cout<<"ENTER THE DATA IN THE RIGHT NODE :- "<<endl;
      root->right=insertIntoBST(root->right,data);
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

void inOrder(node* root,vector<int> &ans){
    if(root==NULL){
        return ;
    }

    inOrder(root->left,ans);
    ans.push_back(root->data);
    inOrder(root->right,ans);
}

bool isTwoSum(node* root,int targetSum){
 
    vector<int> ans;
    inOrder(root,ans);
    int i=0;
    int j=ans.size()-1;
    while(i<j)
    {
        int sum=ans[i] +ans[j];
        if(sum==targetSum){
            return true;
        }
        else if(sum > targetSum)
        {
              j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int  main()
{
    cout<<endl<<endl;
    node* root=NULL;
    cout<<endl<<endl;
    takeInput(root);
    //10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
    //10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
    cout<<endl<<endl;
    int k=14;
    cout<<"FOR TARGET SUM : 14 "<<endl;
    if(isTwoSum(root,k))
    {
        cout<<"HENCE TWO SUM EXIST "<<endl;
    }
    else
    {
        cout<<"HENCE TWO SUM DOES NOT EXIST "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
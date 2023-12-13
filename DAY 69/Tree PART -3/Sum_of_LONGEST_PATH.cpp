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

void solve(node* root,int len,int &maxLen,int sum,int &maxSum){
    //base case
    if(root==NULL){
        if(len>maxLen){
            maxLen=len;
            maxSum=sum;
        }
        else if(len==maxSum)
        {
         
        maxSum=max(sum,maxSum);
        }
       return ;
    }
 sum=sum+root->data;
        solve(root->left,len+1,maxLen,sum,maxSum);
        solve(root->right,len+1,maxLen,sum,maxSum);
}
int Sum_Of_Long_Path(node* root){
    int len=0;
    int maxLen=0;
    int sum=0;
    int maxSum=INT_MIN;

    solve(root,len,maxLen,sum,maxSum);
    return maxSum;
}


int main(){
    node* root=NULL;
    //creating TREE
    root=buildTree(root);
    //4 2 7 -1 -1 1 6 -1 -1 -1 5 2 -1 -1 3 -1 -1
    cout<<endl<<endl;
    cout<<"SUM OF LONGEST PATH OF TREE : "<<Sum_Of_Long_Path(root)<<endl;

    cout<<endl<<endl;



    return 0;
}
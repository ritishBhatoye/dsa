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

void count(node* root,int &cnt){
    if(root==NULL){
        return;
    }
    count(root->left,cnt);
    if(root!=NULL){
        cnt++;
    }
    count(root->right,cnt);

}
int cntNodes(node* root){
    int cnt=0;
    count(root,cnt);
    return cnt;
}
int main()
{
    node* root=NULL;
    //creating BT
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<endl;
    cout<<"COUNT NODE : "<<cntNodes(root)<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
     
    return 0;
}
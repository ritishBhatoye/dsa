//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

vector<int>  bottomView(node* root)
{
    vector<int> ans;
if(root==NULL)
{
 return ans;
}

map<int,int> topNode;
queue<pair<node*,int> >q;
q.push(make_pair(root,0));
while(!q.empty()){
    pair<node*,int> temp=q.front();
    q.pop();
    node* frontNode=temp.first;
    int hd=temp.second;

    topNode[hd]=frontNode->data;

    if(frontNode->left){
        q.push(make_pair(frontNode->left,hd-1));
    }
    if(frontNode->right)
    {
        q.push(make_pair(frontNode->right,hd+1));

    }
}
for(auto i:topNode){
ans.push_back(i.second);
}
return ans;
}


int main()
{
    node* root=NULL;
    cout<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    vector<int> ans=bottomView(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
// 10 20 40 -1 -1 60 -1 -1 30 -1 -1
  // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    cout<<endl<<endl;

    return 0;
}
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<deque>
using namespace std;

class node
{

    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter the data :- ";
    int d;
    cin>>d;
    
    if(d==-1)
        return NULL;

    root = new node(d);

    cout<<"Enter the data in the LEFT of "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of "<<d<<endl;
    root->right =  buildTree(root->right);

    return root;
}

vector<int> bottomView(node* root)
{
    vector<int> ans;

    if(root==NULL)
        return ans;

    map<int,int> topNode;

    queue<pair<node*,int>> q;

    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<node*,int> temp = q.front();
        q.pop();

        node* frontNode = temp.first;
        int hd = temp.second;

        if(topNode.find(hd) == topNode.end())
        {
            topNode[hd] = frontNode->data;
        }
        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));
        }

    }

    for(auto i:topNodes)
    {
        ans.push_back(i);
    }

    return ans;
}


int main()
{   
    // 1 2 3 -1 -1 5 6 -1 -1 8 -1 -1 4 -1 7 -1 9 10 -1 -1 11 -1 -1
    //    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 FALSE
    // 3 1 -1 -1 2 -1 -1 TRUE
    // 26 10 4 0 0 6 0 0 3 0 3 0 0
    // 1 2 3 -1 -1 5 -1 -1 4 -1 6 7 -1 -1 8 -1 -1 
    node* root = NULL;

    root = buildTree(root);
    cout<<endl<<endl;
    vector<int> ans = verticalOrder(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;



    return 0;
}
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


vector<int> leftNodes(node* root)
{
    vector<int> ans;
    if(root==NULL)
        return ans;

    while(root->left!=NULL && root->left->left!=NULL)
    {
        ans.push_back(root->left->data);
        if(root->left!=NULL)
        {
            root=root->left;

        }
    }
    return ans;
}

vector<int> rightNodes(node* root)
{
    vector<int> ans;
    if(root==NULL)
        return ans;

    
        while(root->right!=NULL && root->right->right!=NULL)
        {
            ans.push_back(root->right->data);
            if(root->right!=NULL)
            {
                root=root->right;
    
            }
        }

   
    return ans;
}

vector<int> leafNodes(node* root)
{
    vector<int> ans;

    if(root == NULL)
        return ans;

    if(root->left == NULL && root->right == NULL)
        ans.push_back(root->data);

    vector<int> left = leafNodes(root->left);
    vector<int> right = leafNodes(root->right);

    ans.insert(ans.end(), left.begin(), left.end());
    ans.insert(ans.end(), right.begin(), right.end());

    return ans;
}

vector<int> boundaryTraversal(node* root)
{
    vector<int> ans;
    ans.push_back(root->data);
    

    vector<int> leftNodesAns = leftNodes(root);
    // ans.insert(ans.end(),leftNodesAns.begin(),leftNodesAns.end());
    for(int i=0;i<leftNodesAns.size();i++)
    {
        ans.push_back(leftNodesAns[i]); 
    }

    vector<int> leafNodesAns = leafNodes(root);
    // ans.insert(ans.end(),leafNodesAns.begin(),leafNodesAns.end());
    for(int i=0;i<leafNodesAns.size();i++)
    {
        ans.push_back(leafNodesAns[i]); 
    }


    vector<int> rightNodesAns = rightNodes(root);
    // ans.insert(ans.end(),rightNodesAns.end(),rightNodesAns.begin());

    for(int i=rightNodesAns.size()-1;i>=0;i--)
    {
        ans.push_back(rightNodesAns[i]); 
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
    vector<int> ans = boundaryTraversal(root);
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
#include<iostream>
#include<queue>

using namespace std;

class Node
{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout<<"Enter the data :- ";
    int d;
    cin>>d;

    if(d == -1)
    {
        return NULL;
    }

    root =  new Node(d);

    cout<<"Enter the data in the left :- "<<endl;
    root->left =  buildTree(root->left);

    cout<<"Enter the data in the right :- "<<endl;
    root->right = buildTree(root->right);

    return root;

}
//NLR
void preOrder(Node* root)
{
    if(root==NULL)
        return ;


    //NLR
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

// In Order

void inOrder(Node* root)
{
    if(root==NULL)
        return ;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

// Post Order 
void postOrder(Node* root)
{
    if(root==NULL)
        return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node* root)
{
    if(root==NULL)
        return ;

    queue<Node*> q;

    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        
        q.pop();

        cout<<temp->data<<" ";
        
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }


    }
}

int height(Node* root)
{
    if(root==NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right) + 1;
}
pair<int,int> diameter(Node* root)
{
    if(root==NULL)
    {
        pair<int,int> p =  make_pair(0,0);

        return p;
    }

    pair<int,int> left =  diameter(root->left);
    pair<int,int> right = diameter(root->right);

    int op1 =  left.first;
    int op2 = right.first;

    int op3 = left.second + right.second + 1;

    pair<int,int> ans ;
    ans.first = max(op1,max(op2,op3));

    ans.second = max(left.second,right.second)+1;

    return ans;

    
}

// 50 17 12 9 -1 -1 14 -1 -1 23 19 -1 -1 -1 72 54 -1 67 -1 -1 76 -1 -1
int main()
{
    Node* root = NULL;
    root =  buildTree(root);

    cout<<endl<<endl;
    cout<<"Level Order :- ";
    levelOrder(root);
    cout<<endl<<endl;
    cout<<"Pre Order :- ";
    preOrder(root);
    cout<<endl<<endl;
    cout<<"Post Order :- ";
    postOrder(root);
    cout<<endl<<endl;
    cout<<"Diameter:- "<<diameter(root).first<<endl;
    cout<<endl<<endl;


    return 0;
}
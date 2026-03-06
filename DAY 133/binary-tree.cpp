#include<iostream>
#include<queue>
#include<stack>


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

    cout<<"Enter the element in the left of the "<<d<<" :- "<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the element in the right of the "<<d<<" :- "<<endl;
    root->right = buildTree(root->right);

    return root;
}


void levelOrder(node* root)
{
    queue<node*> q;

    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();

        cout<<temp->data<<" ";

        q.pop();
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

void preOrder(node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<<" ";

    //moving to left 
    preOrder(root->left);

    //moving to right
    preOrder(root->right);

}

void preOrderItrApp(node* root)
{
    stack<node*> s;
    s.push(root);
    while(!s.empty())
    {
        node* temp = s.top();

        cout<<temp->data<<" ";

        s.pop();

        if(temp->right)
       {
            s.push(temp->right);
       }
        if(temp->left)
        {
            s.push(temp->left);
        }
        
        
    }
}

void postOrder(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    //moving to left 
    postOrder(root->left);

    //moving to right
    postOrder(root->right);

    cout<<root->data<<" ";
}

void postOrderItrApp(node* root)
{
    stack<node*> s;
    node* curr = root;
    node* lastVisited = NULL;

    while(curr != NULL || !s.empty())
    {
        if(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            node* temp = s.top();

            if(temp->right!=NULL &&   lastVisited!=temp->right )
            {
                curr=temp->right;
            }
            else{
                cout<<temp->data<<" ";
                lastVisited = temp;
                s.pop();

            }
        }
    }
}

void inOrder(node* root)
{
    if(root==NULL)
        return ;

    //moving to left
    inOrder(root->left);

    cout<<root->data<<" ";

    inOrder(root->right);
}


void inOrderItr(node* root)
{
    stack<node*> s;
    node* curr=root;

    while(curr!=NULL || !s.empty())
    {
        if(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }

        else
        {
                node* temp=s.top();
                s.pop();
                cout<<temp->data<<" ";
                if(temp->right)
                {
                    // s.push(temp->right);
                    curr=temp->right;

                }

        }
    }

}

void buildTreeFromLevelOrder(node* root)
{
    queue<int>
}

int main()
{
//    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// 5 12 7 17 -1 -1 23 -1 -1 -1 13 14 27 -1 -1 3 -1 -1 2 8 -1 -1 11 -1 -1 
    cout<<endl<<endl;
    node* root = NULL;
    cout<<"Building tree :- "<<endl<<endl;
    root=buildTree(root);
    cout<<endl<<endl;
    cout<<"Level Order :- ";
    levelOrder(root);
    cout<<endl<<endl;
    cout<<"Pre Order :- ";
    preOrder(root);
    cout<<endl<<endl;
    cout<<"Pre Order iterative :- ";
    preOrderItrApp(root);
    cout<<endl<<endl;
    
    cout<<"Post Order :- ";
    postOrder(root);
    cout<<endl<<endl;

    cout<<"Post Order Iterative :- ";

    cout<<endl<<endl;

    postOrderItrApp(root);
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<"In Order :- ";
    inOrder(root);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"In Order  Iterative Approach :- ";

    inOrderItr(root);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
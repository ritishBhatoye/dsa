#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left = NULL;
        this->right =NULL;
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

    cout<<"Enter the data in the LEFT OF  :- "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data in the RIGHT of :- "<<d<<endl;
    root->right = buildTree(root->right);

    return root;
    
}




bool isIdentical(node* r1,node* r2)
{

  
    if(r1 == NULL && r2==NULL)
    {
        return true;
    }
    if(r1 != NULL && r2==NULL)
    {
        return false;
    }
    if(r1 == NULL && r2!=NULL)
    {
        return false;
    }
    if(r1->data != r2->data)
    return false;
    

    bool left = isIdentical(r1->left,r2->left);
    bool right = isIdentical(r1->right , r2->right);

    bool isEqual =  r1->data == r2->data ?true:false;
    // bool checkLeft = r1->left->data? r1->left->data == r2->left->data :false;
    // bool checkRight = r1->right->data?r1->right->data == r2->left->data   :  false;

    return left && right && isEqual;
    
}


int main()
{
    // 1 2 4 8 -1 -1 -1 5 6 -1 7 -1 -1 -1 3 -1 -1 

    // true
    // 10 20 40 -1 -1 60 -1 -1 30 -1 -1

    //false
    // 1 2 4 5 -1 -1 -1 -1 3 -1 -1


    node* root1 = NULL;
    root1 = buildTree(root1);
    node* root2 = NULL;
    root2 = buildTree(root2);

    cout<<endl<<endl;
    if(isIdentical(root1,root2))
        cout<<"Identical"<<endl;
    else
        cout<<"Not Identical "<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
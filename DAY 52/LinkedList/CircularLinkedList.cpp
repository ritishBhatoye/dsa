#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//insertion

void insertNode(Node* &tail,int element,int data)
{
//inseerting at start or head node

if(tail==NULL)
{
    //EMPTY LIST
    Node* n=new Node(data);
    tail=n;
    n->next=n;
}
{
    //inserting at last node
    //non-empty 
    //assuming that the element is present in the LIST

    Node* curr=tail;

    while(curr->data!=element)
    {
         curr=curr->next;
    }
    //element found -> curr is representing element wala node
    Node* temp=new Node(data);
    temp->next=curr->next;
    curr->next=temp;
    
}
}
void print(Node* tail){
    Node* temp=tail;
    do
    {
   cout<<tail->data<<" ";
   tail=tail->next;
    }while(tail!=temp);
    cout<<endl<<endl;
}
int main()
{
    Node* tail=NULL;
    //empty list me insert 
     insertNode(tail,5,3);
  

     print(tail);

    return 0;
}
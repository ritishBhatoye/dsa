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
    ~Node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
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
else{
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
    if(tail==NULL){
        cout<<"LIST IS EMPTY "<<endl;
        return ;
    }
    do
    {
   cout<<tail->data<<" ";
   tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"LIST IS EMPTY , PLEASE CHECK AGAIN "<<endl;
        return ;
    }
    else{
        //non-empty 
        
        ///assuming that value is present in the LINKED LIST
        Node* prev=tail;

        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

       //1 NODE Linked List
       if(curr==prev){
        tail=NULL;
       }
       //>=NODE Linked List
        else if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;

        delete curr;
    }
}

int main()
{
    Node* tail=NULL;
    //empty list me insert 
     cout<<endl<<endl;

     insertNode(tail,5,3);
     print(tail);
    //  insertNode(tail,3,10);
    //  print(tail);
    //  insertNode(tail,10,20);
    //  print(tail);
    // //  deleteNode(tail,3);
    // //  print(tail); 
    //  deleteNode(tail,3);
    //  print(tail);
    deleteNode(tail,3);
       print(tail);
     cout<<endl<<endl;

    return 0;
}
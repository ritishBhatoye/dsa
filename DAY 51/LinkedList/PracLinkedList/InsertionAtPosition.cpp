#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next=NULL;

    //CREATING NODE
    Node(int data)
    {
     this->data=data;
     this->next=NULL;
    }
};

//PRINTING OR TRAVERS
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl<<endl;
}
//inserting at PARTICULAR NODE
void insertAtPos(Node* &head,int position,int data)
{   Node* temp=head;
    int cnt=0;
    
    while(cnt<position-1)
    {
      temp=temp->next;
      cnt++;
    }
    //creating NODE which is to be INSERTED
    Node* newNode=new Node(data);
    //POINTING TO  NEXT NODE
    newNode->next=temp->next;
    //POINTING NEXT OF PREV NODE TO NEW NODE
    temp->next=newNode;
}

//inserting at NODE

void insertAtTail(Node* &tail,int data)
{
Node* temp=new Node(data);

//ADDING ADDRESS OF NEW NODE INTO CURRENT NODE
tail->next=temp;
tail=temp;

}

int main(){ 
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl;
    print(head);
    insertAtTail(tail,20);
    print(head);   
    insertAtTail(tail,30);
    print(head);      
    insertAtTail(tail,40);
    print(head);   
    cout<<endl;
    int position=2;
    cout<<"INSERTING AT : "<<position<<endl;
    insertAtPos(head,position,9);
    cout<<"AFTER INSERTION LINKED LIST : "<<endl;
    print(head);
    return 0;
}
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next=NULL;
    
    //creating node
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

//INSERTING AT STARTING or HEAD
void InsertAtHead(Node* &head,int data)
{
    Node* newNode=new Node(data);
    
    newNode->next=head;
    head=newNode;
}

//Inserting at TAIL or END
void InsertAtTail(Node* &tail,int data)
{
     Node* newNode=new Node(data);
     
     tail->next=newNode;
     
     tail=newNode;
}
//Insertion at N position
void InsertionAtPosition(Node* &tail,Node* &head,int position,int data)
{
    Node* temp=head;
    int cnt=0;
    //for inserting at HEAD
    if(position==1)
    {
      InsertAtHead(head,data);  
      return ;
    }
    while(cnt<position-1)
    {   
        temp=temp->next;
        cnt++;
    }
    
    //inserting at LAST POSITION
     if(temp->next==NULL)
     {
        InsertAtTail(tail,data);
        return ;
     }
    
    //creating new node
    Node* newNode=new Node(data);

    newNode->next=temp->next;
    temp->next=newNode;

}

//traversing or PRINTING
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
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n; 
    cout<<endl<<endl;
    print(head);
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    print(head);
    InsertAtTail(tail,40);
    print(head);
    cout<<"INSERTING AT 2 POSITION      : "<<endl;
    InsertionAtPosition(tail,head,2,9);
    print(head);
    cout<<"INSERTING AT LAST POSITION   : "<<endl;
    InsertionAtPosition(tail,head,5,80);
    print(head);
    cout<<"INSERTING AT FIRST POSITION  : "<<endl;
    InsertionAtPosition(tail,head,1,1);
    print(head);
    cout<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    public:
    //creating node
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

//print or traverse
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
//insert at head
void insertAtHead(Node* &head,int data)
{

   Node* newNode=new Node(data);
   newNode->next=head;
   head=newNode;
}
//insert at tail
void insertAtTail(Node* &tail,int data)
{
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;
}
//insert at any position
void insertAtPostion(Node* &head,Node* &tail,int position,int data)
{
   //inserting at start or head
   if(position==1)
   {
     insertAtHead(head,data);
     return ;
   }
   else
   {
   
    int cnt=0;
    Node* temp=head;
    while(cnt<position)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
      insertAtTail(tail,data);
    }
    else
    {   
         //in between
        
        Node* newNode=new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
    }
   }
}
void reverseLL(Node* &head)
{
    Node* forward=NULL;
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    print(prev);
}
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtHead(head,5);
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtHead(head,50);
    print(head);
    reverseLL(head);
    
    
    return 0;
}
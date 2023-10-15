#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *tail; 
    Node *prev;
public:
      Node(int data)
      {
        this->data=data;
        this->tail=NULL;
        this->next=NULL;
        this->prev=NULL;
      }
      ~Node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
      }
};

//print or traversing
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
//insertion at head
void insertionAtHead(Node* &head,int data)
{
   Node* temp=new Node(data);
   head->prev=temp;
   temp->next=head;
   head=temp;
}
//insertion at tail
void insertionAtTail(Node* &tail,int data)
{
  Node* temp=new Node(data);
  temp->prev=tail;
  tail->next=temp;
  tail=temp;
}

//insertion at ANY or PARTICULART POSITION 
void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{

Node* temp=head;
//if at head
if(position==1){
    insertionAtHead(head,data);
    return ;
}
int cnt=0;
while(cnt<position-1){
    temp=temp->next;
    cnt++;
}
//inserting at last
if(temp->next==NULL){
    insertionAtTail(tail,data);
    return ;
}
//creation of new node
Node* newNode=new Node(data);
newNode->next=temp->next;
//TEMP TO AGLA AND newNode TE JUST NEXT WALA ELEMENT
temp->next->prev=newNode;
temp->next=newNode;
newNode->prev=temp;
}
//deletion of node
void deleteNode(Node* &head,Node* &tail,int position){
    //deletion of FIRST NODE
    Node* temp=head;

    if(position==1)
    {
     temp->next->prev=NULL;
     head=temp->next;
     temp->next=NULL;

     //memory free
     delete temp;
    }

    else
    {
        Node* c=temp;
        Node* p=NULL;
        int cnt=1;
    
      while(cnt<position){
        p=c;
        c=c->next;
        cnt++;
      }
      //LAST NODE
      if(c->next==NULL)
      {     
            c->prev=NULL;
            p->next=NULL;
            tail=p;
            delete c;
      }

        //in between
    else
    {
        p->next=c->next;
        c->next->prev=p;
        c->next=NULL;
        c->prev=NULL;
        delete c;
      }
    }
}
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertionAtHead(head,20);
    print(head);
    insertionAtHead(head,30); 
    print(head);
    insertionAtHead(head,40);    
    print(head);
    insertionAtHead(head,50);
    print(head);
    insertionAtTail(tail,1000);
    print(head);
    insertAtPosition(head,tail,1,-1);
    print(head);
    cout<<"NODE AT 1st POSITION : "<<endl;
    deleteNode(head,tail,1);
    print(head);
    cout<<"NODE AT 3rd POSITION : "<<endl;
    deleteNode(head,tail,3);
    print(head);
    cout<<"DELETING LAST NODE : "<<endl;
    deleteNode(head,tail,5);
    print(head);
    cout<<"TAIL DATA : "<<tail->data<<endl;
    cout<<"TAIL NEXT : "<<tail->next<<endl;
    cout<<"HEAD DATA : "<<head->data<<endl;
    cout<<"HEAD NEXT : "<<head->next<<endl;


    cout<<endl<<endl;

    return 0;
}
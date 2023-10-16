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

void deletionNode(int position,Node* &head){
    //DELETION OF FIRST OR START NODE
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL:

        delete temp;
    }
    else
       {
        //deleting any middle or last node
        Node* curr=head;
        Node* p=NULL;

        int cnt=1;
        while(cnt<position){
            p=curr;
            curr=curr->next;
            cnt++;
        }
        p->next=curr->next;
        curr->next->prev=p;
        curr->next=NULL;
        curr->prev=NULL;

        delete curr;

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
    cout<<endl<<endl;

    return 0;
}
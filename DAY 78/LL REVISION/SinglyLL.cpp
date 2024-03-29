#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void InsertAtHead(Node* &head,int data)
{

Node* temp=new Node(data);
temp->next=head;
head=temp;

}

void insertAtTail(Node* &tail,int data)
{
 Node* temp=new Node(data);
 tail->next=temp;
 tail=temp;

}
void print(Node* &head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

void InsertAtPos(Node* &head,Node* &tail,int pos,int data)
{
   
  Node* temp=head;
  int cnt=1;
  while(cnt<pos-1)
  {
   cnt++;
   temp=temp->next;
  }

  Node* newNode=new Node(data);
  newNode->next=temp->next;
  temp->next=newNode;  
}

void delNode(Node* &head,Node* &tail,int pos)
{
   
   Node* curr=head;
   Node* prev=NULL;
   int cnt=1;
   while(cnt<pos)
   {
    prev=curr;
    curr=curr->next;
    cnt++;
   }
   
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;
}

int main()
{
    cout<<endl<<endl;
    Node* head=new Node(10);
    Node* tail=head;
    cout<<endl;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    cout<<endl;
    print(head);
    InsertAtPos(head,tail,2,-100);
    cout<<endl;
    print(head);
    cout<<endl;
    delNode(head,tail,2);
    print(head);

    cout<<endl<<endl;

}
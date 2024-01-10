#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value=this->data;
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
    head->prev=temp;
    head=temp;
}
void InsertAtTail(Node* &tail,Node* &head,int data)
{
Node* temp=new Node(data);

tail->next=temp;
temp->prev=tail;
tail=temp;

}
int len(Node* &head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void print(Node* &head)
{
    Node* temp=head;
    
    while(temp!=NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<endl;

}

void insertAtPos(Node* &head,Node* &tail,int pos,int data)
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
  Node* p=NULL;
  int cnt=1;
  
  while(cnt<=pos-1)
  {
    cnt++;
    p=curr;
    curr=curr->next;
  }

  p->next=curr->next;
  curr->next->prev=p;
  curr->next=NULL;
  curr->prev=NULL;

  delete curr;


}
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;

    cout<<endl<<endl;
    cout<<n->data<<" ";
    cout<<endl;
    cout<<n->prev<<" ";
    cout<<endl;
    cout<<n->next<<" ";
    cout<<endl;
    InsertAtTail(tail,head,20);
    InsertAtTail(tail,head,30);
    InsertAtTail(tail,head,40);
    InsertAtTail(tail,head,50);
    InsertAtTail(tail,head,60);
    print(head);
    cout<<endl;
    cout<<"LENGTH : "<<len(head)<<endl;
    cout<<endl;
    insertAtPos(head,tail,2,-100);
    print(head);
    cout<<endl;
    delNode(head,tail,2);
    print(head);
    cout<<endl<<endl;

    return 0;
}
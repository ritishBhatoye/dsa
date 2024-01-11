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
        if(this->next!=NULL)
        {
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

void InsertAtTail(Node* &head,Node* &tail,int data)
{
 
 Node* temp=new Node(data);
 tail->next=temp;
 temp->prev=tail;
 tail=temp;

}
void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;

    }
}

void InsertAtMid(Node* &head,Node* &tail,int pos,int data)
{
    int cnt=1;
    
    Node* curr=head;
  
    while(cnt<pos-1)
    {
        cnt++;

        curr=curr->next;
    }
    
    Node* temp=new Node(data);
    temp->next=curr->next;
    temp->prev=curr;
    curr->next=temp;
    

}
void delNode(Node* &head,Node* &tail,int pos)
{
int cnt=1;
Node* p=NULL;
Node* curr=head;
while(cnt<pos)
{
 cnt++;
 p=curr;   
 curr=curr->next;
}

p->next=curr->next;
curr->next->prev=p;
curr->next=NULL;
delete curr;

}

Node* SearchNode(Node* &head,int data){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==data)
        {
          return temp;
        }
        else
        {
         temp=temp->next;
        }
    }
}

int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    InsertAtTail(head,tail,20);
    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,40);
    InsertAtTail(head,tail,50);
    InsertAtMid(head,tail,2,-100);
    cout<<endl<<endl;
    print(head);
    delNode(head,tail,2);
    cout<<endl<<endl;
    print(head);
    int d;
    cout<<endl;
    cout<<"ENTER THE DATA YOU WANT TO INSERT :- "<<endl;
    cin>>d;
    Node* ans=SearchNode(head,d);
    cout<<"ANS :- "<<ans->data<<" ";
    cout<<endl<<endl;

    return 0;
}
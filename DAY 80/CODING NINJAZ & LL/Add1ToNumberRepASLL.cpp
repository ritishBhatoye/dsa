#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
     
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail,int data)
{ 
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* reverseLL(Node* &head){
    Node* prev=NULL;

    Node* curr=head;

    while(curr!=NULL)
    {
        Node* forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}
Node* addOne(Node* &head)
{
  head=reverseLL(head);
  Node* temp=head;
  int carry=1;

  while(temp!=NULL)
  {
     temp->data=temp->data+carry;
     if(temp->data < 10){
        carry=0;

        break;
     }
     else
     {  temp->data=0;
        carry=1;
     }
     temp=temp->next;
  }

  if(carry==1){
    Node* addNode=new Node(1);
    head=reverseLL(head);
    addNode->next=head;
  }

  head=reverseLL(head);

  return head;

}

int main()
{
    Node* n=new Node(1);
    Node* head=n;
    Node* tail=n;

    cout<<endl<<endl;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    print(head);
    cout<<endl<<endl;
    Node* ans=addOne(head);
    print(ans);
    cout<<endl<<endl;

    return 0;

}
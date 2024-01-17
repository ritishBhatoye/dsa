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

Node* add2Num(Node* head1,Node* head2,Node* tail1,Node* tail2)
{
   Node* ans=new Node(-1);
   head1=reverseLL(head1);
   head2=reverseLL(head2);

   Node* t1=head1;
   Node* t2=head2;

   Nod

  
}

int main()
{
    Node* n=new Node(1);
    Node* head1=n;
    Node* tail1=n;
    Node* n1=new Node(2);
    Node* head2=n1;
    Node* tail2=n1;

    cout<<endl<<endl;
    insertAtTail(tail1,9);
    insertAtTail(tail1,0);
    insertAtTail(tail2,5);
    cout<<"LINKED LIST :- 1 "<<endl;
    print(head1);
    cout<<"LINKED LIST :- 2 "<<endl;
    print(head2);
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;

}
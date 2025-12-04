#include<iostream>
using namespace std;

class Node
{

    public:
    int data;
    Node* next;
    
    Node(int data)
    {
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
void print(Node* &head)
{
   Node* temp=head;

   while(temp!=NULL)
   {
        cout<<temp->data<<" ";
        temp=temp->next;
   }
}

Node* reverseLL(Node* &head)
{
   Node* prev=NULL;
   Node* curr=head;

   while(curr!=NULL)
   {
    Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
   }
   return prev;
}

int main()
{
    Node* n=new Node(10);
    Node* tail=n;
    Node* head=n;
    cout<<endl<<endl;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);

    cout<<endl<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* ans=reverseLL(head);

    print(ans);
    cout<<endl<<endl;


}
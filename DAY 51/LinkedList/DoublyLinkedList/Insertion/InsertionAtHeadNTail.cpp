#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    Node* tail;

    public:
    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
        this->tail=NULL;
    }
};

///printing
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
//Inserting at head
void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
//Inserting at Tail
void insertAtTail(Node* &tail,int data)
{
    
    Node* temp=new Node(data);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}

//inserting at Any Position
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);    
    insertAtHead(head,40);
    print(head);
    insertAtHead(head,50);
    print(head);
    insertAtTail(tail,100);
    print(head);
    cout<<endl<<endl;
    return 0;
}
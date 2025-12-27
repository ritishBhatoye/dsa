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

void insertAtHead(Node* &head,int k)
{
    Node* temp=new Node(k);
    
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int k)
{
    Node* temp=new Node(k);

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

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* n=new Node(10);

    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;

}
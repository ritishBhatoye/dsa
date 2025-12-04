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

void deletionAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    delete temp;

}

void deletionOfTail(Node* &head,Node* &tail)
{
    Node* temp=head;
    Node* nodeToDel=tail;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    tail=temp;
    tail->next=NULL;
    delete nodeToDel;
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
    deletionAtHead(head);
    deletionOfTail(head,tail);
    print(head);
    cout<<endl<<endl;


}
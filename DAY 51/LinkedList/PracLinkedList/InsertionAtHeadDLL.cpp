#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    //CREATING NODE
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

//inserting at head

void insertAtHead(Node* &head,int data)
{
    //creating node
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
///Printing Or Traversing
void print(Node* &head){
   Node* temp=head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl<<endl;
}

int getLength(Node* &head)
{
    int l=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
return l;
}

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
    cout<<endl<<endl;
    return 0;
}
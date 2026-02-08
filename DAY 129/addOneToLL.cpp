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
    Node* forw=head;

    Node* temp=NULL;

    while(forw!=NULL)
    {
        temp=forw->next;
        forw->next=prev;
        prev=forw;
        forw=temp;
    }

    return prev;
}

Node* AddOneToLL(Node* &head)
{
   head=reverseLL(head);
   Node* temp=head;
   int c=1;
   
   while(temp!=NULL)
   {
        temp->data=temp->data+c;

        if(temp->data<10)
        {
            c=0;
            break;
        }
        else
        {
            c=temp->data/10;
            temp->data%=10;
        }
        temp=temp->next;
   }

   if(c==1)
   {
    Node* newNode=new Node(1);

    head=reverseLL(head);

    newNode->next=head;
   return newNode;
}
return reverseLL(head);
}

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=tail->next;
}

int main()
{
    cout<<endl<<endl;
    Node* node=new Node(1);
    Node* head=node;
    Node* tail=node;

    cout<<endl<<endl;
    insertAtTail(tail,5);
    insertAtTail(tail,9);

    print(head);
    cout<<endl<<endl;
    Node* ans=AddOneToLL(head);
    cout<<endl<<endl;
    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
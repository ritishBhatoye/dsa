#include<iostream>
using namespace std;

class Node
{
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
}



void print(Node* &head)
{
    Node* temp=head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void insertAtHead(Node* &head,int data)
{
Node* temp=new Node(data);
temp->next=head;
head=head->next;
}

void insertAtTail(Node* &tail,int data)
{
    Node temp=new Node(data);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtK(Node* &head,int data,int k)
{
   Node* itr=head;

   int cnt=1;
   while(cnt<k-1)
   {
    itr=itr->next;
    cnt++;
   }

   Node* temp=new Node(data);
   temp->prev=itr;
   temp->next=itr->next;
   itr->next=temp;


}

void deleteAtHead(Node*& head)
{
    Node* temp=head;

    head=head->next;
    head->prev=NULL;

    temp->next=NULL;
    temp->prev=NULL;

    delete temp;
}

void deleteAtTail(Node* &tail)
{
    Node* temp=tail;
    tail=tail->prev;

    tail->next=NULL;

    temp->next=NULL;
    temp-prev=NULL;

    delete temp;

}

void deleteAtK(Node* &head,int k)
{
    Node* itr=head;

    int cnt=0;

    while(cnt!=k-1)
    {
        itr=itr->next;
        cnt++;

    }

    Node temp=itr->next;


    itr->next=itr->next->next;

    temp->next=NULL;
    temp->prev=NULL;

    delete temp;

}

int main()
{
    return 0;
}
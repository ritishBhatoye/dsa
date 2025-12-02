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

void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
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
    cout<<endl;
}

void insertAtMiddle(Node* &head,Node* &tail,int data,int p)
{

    int i=0;
    Node *itr=head;
    while(i!=p)
    {
        itr=itr->next;
        i++;
    }

    if(itr->next==NULL || itr==NULL)
    {
        cout<<"YOU hAVE reached to an end "<<endl; 
    }

    Node* temp=new Node(data);
    temp->next=itr->next;
    itr->next=temp;   

}



int main()
{
    cout<<endl<<endl;
    Node* n1 = new Node(10);
    Node* head=n1;
    Node* tail=n1;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    int p,data;
    cout<<endl<<endl;

    cout<<"Enter the position in the 0-based index to insert an element :- "<<endl;
    cin>>p;
    cout<<endl<<endl;
    cout<<"Enter the data :- ";
    cin>>data;
    cout<<endl<<endl;

    insertAtMiddle(head,tail,data,p);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;

    return 0;
}
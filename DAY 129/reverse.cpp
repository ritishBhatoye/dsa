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

Node* reverse(Node* &head)
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


Node* middleNode(Node* &head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;

        if(fast->next!=NULL)
        {
            fast=fast->next;
        }
    }

    return slow;
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


void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;

    tail=tail->next;
}

int main()
{

    Node* node=new Node(10);

    Node* head=node;
    Node* tail=node;
    cout<<endl<<endl;
    
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    cout<<endl<<endl;
    print(head);
    Node* ans=reverse(head);

    cout<<endl;
    print(ans);

    cout<<endl<<endl;
    return 0;
}
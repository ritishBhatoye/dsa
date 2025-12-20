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

void inputAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);

    temp->next=head;
    head=temp;
}
void inputAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=temp;
}

Node* reverseLL(Node* &head)
{

    Node* curr=NULL;
    Node* forw=head;

    Node* temp=head;

    while(forw!=NULL)
    {
        Node* temp=forw->next;

        forw->next=curr;
        curr=forw;
        forw=temp;

    }

    return curr;
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
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;
    cout<<endl<<endl;
    inputAtTail(tail,20);
    inputAtTail(tail,30);
    inputAtTail(tail,40);
    inputAtTail(tail,50);
    inputAtTail(tail,60);

    print(node);
    cout<<endl<<endl;
    Node* ans=reverseLL(head);
    cout<<endl<<endl;
    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

return 0;
}

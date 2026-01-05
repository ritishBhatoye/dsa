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
    Node* node=new Node(data);

    tail->next=node;
    tail=tail->next;
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

int length(Node* &head)
{
    Node* temp=head;

    int cnt=0;

    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }

    return cnt;
}

Node* moveToLastToFront(Node* &head)
{
    Node* preserveHead=head;
    Node* temp=head;

    Node* prevLastNode=NULL;

    while(temp->next!=NULL)
    {
        prevLastNode=temp;
        temp=temp->next;
    }

    prevLastNode->next=NULL;

    temp->next=preserveHead;

    return temp;

}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;

    print(head);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    Node* ans=moveToLastToFront(head);
    print(ans);
    cout<<endl<<endl;

    return 0;
}
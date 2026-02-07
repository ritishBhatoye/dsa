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

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=tail->next;
}

void delMidNode(Node* &head)
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

    slow->data=slow->next->data;
    slow->next=slow->next->next;

}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* head=new Node(10);
    Node* tail=head;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);


    print(head);

    delMidNode(head);
    cout<<"After deleting the mid node :- "<<endl;
    print(head);

    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
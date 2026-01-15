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

// Node* reverse(Node* &head)
// {
//     Node* prev=NULL;
//     Node* curr=head;

//     while(curr!=NULL)
//     {
//         Node* temp=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=temp;
//     }


//     return prev;

// }

Node* middleNode(Node* &head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* ans=middleNode(head);
    cout<<"NODE DATA :- "<<ans->data<<" ";
    cout<<endl<<endl;

    cout<<"NODE POINTS TO :- "<<ans->next<<" ";
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
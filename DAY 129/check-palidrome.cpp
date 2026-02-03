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

Node* midNode(Node* &head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

bool checkPalidrome(Node* &head)
{
    Node* first=head;
    Node* mid=midNode(head);
    Node* newHead=reverse(mid->next);
    Node* second=newHead;

    while(second!=NULL)
    {
        if(first->data!=second->data)
        {
            reverse(newHead);
            return false;
        }

        first=first->next;
        second=second->next;
    }
    reverse(newHead);
    return true;
}

int main()
{

    Node* node=new Node(1);

    Node* head=node;
    Node* tail=node;
    cout<<endl<<endl;
    
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);

    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;

    // Node* mid=midNode(head);
    // print(mid);
    if(checkPalidrome(head))
    {
        cout<<"LL is having palidrome characteristics"<<endl;
    }
    else
    {
        cout<<"LL is NOT having palidrome characteristics"<<endl;

    }
    print(head);
    cout<<endl;


    cout<<endl<<endl;
    return 0;
}
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
    Node* newNode=new Node(data);

    tail->next=newNode;
    tail=tail->next;
}



int main()
{
    cout<<endl<<endl;
    Node* node=new Node(1);
    Node* head=node;
    Node* tail=node;

    cout<<endl<<endl;
    insertAtTail(tail,2);
    
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
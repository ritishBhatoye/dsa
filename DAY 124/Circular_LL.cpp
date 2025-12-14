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

void insertNode(Node* &tail,int element,int data)
{
    
    if(tail==NULL)
    {
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }
    else
    {
        Node* temp=tail;
        while(temp->data!=element)
        {
            temp=temp->next;
        }

        Node* newNode=new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
        if(newNode!=tail)
        {
            tail=newNode;

        }
    }
}

void print(Node* &tail)
{
    Node* temp=tail->next;

    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=tail);
}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* tail=NULL;
    insertNode(tail,0,10);
    insertNode(tail,10,20);
    insertNode(tail,20,30);
    insertNode(tail,30,40);
    insertNode(tail,40,50);
    insertNode(tail,50,60);

    print(tail);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
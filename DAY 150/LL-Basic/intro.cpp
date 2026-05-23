#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,int data)
{
    if(data==-1)
        return ;

    Node* newNode = new Node(data);

    newNode->next = head;
    head = newNode;

}

void printLL(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }
}

void insertAtTail(Node* &tail,int data)
{
    if(data==-1)
        return ;

    Node* newAdd =  new Node(data);
    tail->next = newAdd;
    tail = tail->next;
    

}

int main()
{
    cout<<endl<<endl;
    Node* node = new Node(10);
    Node* head = node;
    Node* tail= node;

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);
    cout<<endl<<endl;
    insertAtTail(tail,12);
    insertAtTail(tail,42);
    insertAtTail(tail,52);
    insertAtTail(tail,40);

    cout<<endl<<endl;
    printLL(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node *tail;

public:
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
        this->tail=NULL;
    }
};

//PRINTING LINKED LIST
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

int getLength(Node* &head)
{
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

//inserting at Head
void insertAtHead(Node* &head,int data)
{   
    //CREATING NODE 
    Node* temp=new Node(data);
    temp->next=head;
    //moving HEAD
    head=temp;
}
//insertion At Tail or END
void insertAtTail(Node* &tail,int data)
{    
    //creating NEW NODE
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);    
    insertAtHead(head,40);
    print(head);
    insertAtTail(tail,100);
    print(head);
    return 0;
}
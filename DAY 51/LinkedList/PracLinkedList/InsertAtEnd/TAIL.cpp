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

void insertAtHead(Node* &head,int data){
    
    //CREATING TEMP NODE
    Node* temp=new Node(data);

    temp->next=head;
    //moving head to TEMP NODE
    head=temp;
    
}

void insertAtTail(Node* &tail,int data)
{
Node* temp=new Node(data);

tail->next=temp;
tail=temp;
}

void print(Node* &head)
{
Node* temp=head;    
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl<<endl;
}

int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertAtTail(tail,20);
    print(head);   
        insertAtTail(tail,30);
    print(head);  
        insertAtTail(tail,40);
    print(head);  
        insertAtTail(tail,50);
    print(head);  
    return 0;
}
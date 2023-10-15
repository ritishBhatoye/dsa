#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //creating NODE
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
//INSERTION AT HEAD 
void insertAtHead(Node* &head,int data)
{
//CREATING TEMP NODE FOR ADDING AN ELEMENT
Node* temp=new Node(data);
temp->next=head;
head=temp;

}

//INSERTION AT TAIL
void insertAtTail(Node* &tail,Node* &head,int data)
{
 Node* temp=new Node(data);
 //mtlb CURRENT NODE
 tail->next=temp;
 //MOVE TAIL TO TEMP NODE
 tail=temp;
 //or
 //tail=tail->next
 //NOT  NECESSSARY(OPTIONAL)
 temp->next=NULL;
}

//TRAVERSING LINKED LIST USING HEAD
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        //MOVING TO NEXT NODE
        temp=temp->next;
    }
    cout<<endl<<endl;
}


int main()
{ 
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl;
    print(head);
    insertAtTail(tail,head,20);
    print(head);
    insertAtTail(tail,head,30);
    print(head);
    insertAtTail(tail,head,40);
    print(head);
    insertAtTail(tail,head,50);
    print(head);
    return 0;
}
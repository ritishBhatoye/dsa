#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
     this->data=data;
     this->next=NULL;
     this->prev=NULL;
    }
};

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

Node* reverseLL(Node* &head)
{
Node* curr=head;
Node* p=NULL;

while(curr!=NULL){
    Node* forw=curr->next;
    curr->next=p;
    curr->prev=forw;
    p=curr;
    curr=forw;
}
return p;
}

void print(Node* &head)
{
Node* temp=head;
while(temp!=NULL){
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
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    print(head);
    
    Node* ans=reverseLL(head);
    print(ans);
    cout<<endl<<endl;


    
    return 0;
}
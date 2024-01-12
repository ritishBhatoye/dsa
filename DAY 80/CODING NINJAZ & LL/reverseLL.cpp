#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
     
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail,int data)
{ 
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverseLL(Node* &head)
{
Node* curr=head;
Node* prev=NULL;

while(curr!=NULL){
    Node* forw=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forw;
}
return prev;
}

Node* reverseRec(Node* &head)
{
    
   if(head==NULL || head->next==NULL){
    return prev;
   }
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
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    print(head);
    cout<<endl<<endl;
    cout<<"AFTER REVERSING :- "<<endl;
    Node* ans=reverseLL(head);
    print(ans);
    cout<<endl<<endl;

    return 0;

}
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

void InsertAtTial(Node* &tail,int data){
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

Node* reverseLL(Node* &head){
Node* prev=NULL;
Node* curr=head;
while(curr!=NULL)
{
 Node* forw=curr->next;
 curr->next=prev;
 prev=curr;
 curr=forw;
}
return prev;
}
int main()
{
    Node* n=new Node(10);
    Node* tail=n;
    Node* head=n;
    cout<<endl;
    cout<<head->data<<" ";
    cout<<endl;
    cout<<endl<<endl;
    InsertAtTial(tail,20);
    print(head);
    InsertAtTial(tail,30);
    print(head);
    InsertAtTial(tail,40);
    print(head);
    InsertAtTial(tail,50);
    print(head);
    InsertAtTial(tail,60);
    print(head);
    cout<<endl<<endl;
    Node* ans=reverseLL(head);
    print(ans);
    cout<<endl;
    return 0;
}
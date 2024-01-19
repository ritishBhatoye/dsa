#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next==NULL){
            delete next;
            next=NULL;
        }
    }
};

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}


Node* lastToFirst(Node* &head,Node* &tail)
{
   Node* curr=head;
   Node* prev=NULL;

   while(curr->next!=NULL)
   {
      prev=curr;
      curr=curr->next;

   }
    
    curr->next=head;
    prev->next=NULL;
    head=curr;
    tail=prev;

    return head;
}
int main()
{
    cout<<endl<<endl;
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
   
    cout<<endl;
    print(head);
    Node* ans=lastToFirst(head,tail);
    print(ans); 

     
    cout<<endl<<endl;
    
    return 0;
}
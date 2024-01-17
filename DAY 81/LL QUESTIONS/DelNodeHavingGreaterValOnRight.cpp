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
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
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

Node* delNodeGRight(Node* &head)
{
 Node* A=new Node(-1);
 Node* ans=A;
 Node* temp=head;
//  Node* n=temp->next;
//  Node* nn=n->next;
 while(temp!=NULL)
 {
   
   if(temp->data < temp->next->data && temp->next->data > temp->next->next->data)
   {
    ans->next=temp;
    ans=temp;
    temp=temp->next->next;
   }
    else
    {
      temp=temp->next;
    }
 }
 A=A->next;
 
 return A;
}

int main()
{
    cout<<endl<<endl;
    Node* n=new Node(12);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,15);
    insertAtTail(tail,10);
    insertAtTail(tail,11);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,2);
    insertAtTail(tail,3);

    cout<<endl;
    print(head);
    Node* ans=delNodeGRight(head);
    print(ans);
     
    cout<<endl<<endl;
    
    return 0;
}
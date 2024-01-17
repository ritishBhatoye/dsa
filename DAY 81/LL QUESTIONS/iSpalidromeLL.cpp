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

Node* findMid(Node* head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* reverseLL(Node* &head){
    Node* temp=head;
    Node* p=NULL;
    while(temp!=NULL )
    {
      Node* forw=temp->next;
      temp->next=p;
      p=temp;
      temp=forw;

    }
    return p;
}
bool isPalidromeLL(Node* &head)
{
  if(head->next==NULL){
    return true;
  }
  Node* mid= findMid(head);
  Node* temp=mid->next;
  mid->next=reverseLL(temp);
  

  Node* h1=head;
  Node* h2=mid->next;

while(h2!=NULL)
{
    if(h1->data!=h2->data){
        return false;
    }
    h1=h1->next;
    h2=h2->next;
}

temp=mid->next;
mid->next=reverseLL(temp);

  return true;
    
}


int main()
{
    cout<<endl<<endl;
    Node* n=new Node(1);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,3);
    insertAtTail(tail,5);
    insertAtTail(tail,3);
    insertAtTail(tail,1);
    cout<<endl;
    print(head);
    if(isPalidromeLL(head)){
        cout<<"YES LL IS PALIDROME " <<endl;
    }
    else{
        cout<<"NO LL IS NOT PALIDROME " <<endl;

    }
    cout<<endl<<endl;
    
    return 0;
}
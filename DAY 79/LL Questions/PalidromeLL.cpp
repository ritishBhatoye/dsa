#include<iostream>
using namespace std;

class Node
{public:
 int data;
 Node* next;
 Node(int data){
    this->data=data;
    this->next=NULL;
 }
};

void InsertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    
    tail->next=temp;
    tail=temp;

}

int getLength(Node* &head)
{
    Node* temp=head;

    int cnt=0;

    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

Node* midNode(Node* head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* reverseLL(Node* head)
{
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


void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

    cout<<endl<<endl;
}

bool isPal(Node* &head)
{
  
  if(head->next==NULL){
    return true;
  }
  Node* middle=midNode(head);
  Node* temp=middle->next;
  middle->next=reverseLL(temp);

  Node* h1=head;
  Node* h2=middle->next;

  while(h2!=NULL){
    if(h1->data!=h2->data){
        return false;
    }
    h1=h1->next;
    h2=h2->next;
  }

  temp=middle->next;
  middle->next=reverseLL(temp);

  return true;
   
} 

int main(){
    Node* n=new Node(10);
    Node* tail=n;
    Node* head=n;
    cout<<endl<<endl;
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    print(head);
    InsertAtTail(tail,40);
    print(head);
    InsertAtTail(tail,50);
    print(head);
    InsertAtTail(tail,60);
    print(head);
    cout<<endl;
    cout<<"SIZE : "<<getLength(head)<<endl;
    cout<<endl<<endl;
    Node* ans=reverseLL(head);
    cout<<"AFTER REVERSING : "<<endl;
    print(ans);
    cout<<endl<<endl;
    if(isPal(head)){
        cout<<"YES L.L IS PALIDROME "<<endl;
    }
    else
    {
     cout<<"NO L.L IS NOT PALIDROME "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
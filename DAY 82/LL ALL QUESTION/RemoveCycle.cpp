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

Node* flyodDetect(Node* &head){
    if(head==NULL){
        return NULL;
    }

    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && slow!=NULL)
    {
      fast=fast->next;
      if(fast!=NULL){
        fast=fast->next;
      }
      slow=slow->next;

      if(fast==slow)
      {
           cout<<"Loop detected "<<slow->data<<" ";
           return slow;
      }
    }
return NULL;
}
Node* startingNode(Node* &head)
{
Node* interSec=flyodDetect(head);
Node* slow=head;

while(slow!=interSec){
    interSec=interSec->next;
    slow=slow->next;
}

return slow;
}
void RemoveCycle(Node* &head){

    if(head==NULL)
    {
        return ;
    }

    Node* startOfLoop=startingNode(head);
    Node* temp=startOfLoop;

    while(temp->next!=temp)
    {
        temp=temp->next;
    }

    temp->next=NULL;
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
    
    if(flyodDetect(head)!=NULL)
    {
        cout<<"LL IS CONTAINING LOOP "<<endl;
    }
    else
    {
        cout<<"LL IS NOT CONTAINING LOOP "<<endl;

    }

     
    cout<<endl<<endl;
    
    return 0;
}
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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;

}

Node* midNode(Node* &head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}

int main(){
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    insertAtTail(tail,20);
    insertAtTail(tail,30);    
    insertAtTail(tail,40);    
    insertAtTail(tail,50);
    cout<<endl<<endl;
    print(head); 
    Node* ans=midNode(head);
    cout<<ans->data<<" ";  


    cout<<endl<<endl;

    return 0;
}
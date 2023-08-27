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
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;

}
void InsertAtHead(Node* &head,int d){
Node* temp=new Node(d);
temp->next= head;
head=temp;
}



void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* n1=new Node(10);
    Node *head=n1;
    Node *tail=n1;
    print(head);
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    print(head);
    InsertAtTail(tail,40);
    print(head);

    return 0;
}
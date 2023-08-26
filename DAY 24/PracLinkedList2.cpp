#include<iostream>
using namespace std;
//CREATING SINGLY LINKED LIST 
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtHead(Node* &head,int d){
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //CREATED NEW NODE
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    //HEAD POINTED TO NODE 1
    Node* head=node1;
    print(head);
    InsertAtHead(head,20);
    print(head);

    return 0;
}
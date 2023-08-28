#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    } 
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        //TEMP KO AGE BDA DO
        temp=temp->next;
    }
}
//LENGTH

int getLength(Node* head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
int input(){
    int d;
    cout<<"ENTER THE DATA FOR NODE "<<endl;
    cin>>d;
    return d;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    cout<<endl;
    insertAtHead(head,input());
    insertAtHead(head,input());
    insertAtHead(head,input());
    print(head);
    cout<<endl;
    cout<<"LENGTH OF THE LINKED LIST IS : "<<getLength(head)<<endl;
    return 0;
}
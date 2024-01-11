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

Node* getMidNode(Node* &head){
    int size=getLength(head)/2;
    Node* temp=head;
    int cnt=0;

    while(cnt<size){
        cnt++;
        temp=temp->next;
    }
    return temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl<<endl;
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
    Node* ans=getMidNode(head);
    cout<<"MID NODE : "<<ans->data<<" ";
    cout<<endl<<endl;

    return 0;
}
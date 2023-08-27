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
void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
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
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void InsertAtPostion(Node* &tail,Node* &head,int position,int d){
    if(position==1){
    InsertAtHead(head,d);
    return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at last position

    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    } 

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}
int main(){
    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    //InsertAtHead(head,20);
    print(head);
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    print(head);
    // InsertAtPostion(head,1,25);
    // print(head);
    InsertAtPostion(tail,head,4,50);
    print(head);

    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;

    return 0;
}
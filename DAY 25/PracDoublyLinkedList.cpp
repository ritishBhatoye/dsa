#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

   Node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL; 
   }
   ~Node(){
    int val=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"MEMORY FREE FOR NODE WITH DATA "<<val<<endl;
   }
};
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr =head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr; 
    }
}

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
Node* temp=new Node(d);
tail->next=temp;
temp->prev=tail;
tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    int cnt=1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int input(){
    int d;
    cout<<endl;
    cout<<"ENTER THE DATA FOR NODE : ";
    cin>>d;
    return d;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
if(position==1){
    insertAtHead(head,d);
    return;
}
Node* temp=head;
int cnt=1;
while(cnt<position-1){
temp=temp->next;
cnt++;
}
if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
}

//CREATING A NODE FOR D
Node* nodeToInsert=new Node(d);
nodeToInsert->next=temp->next;
temp->next->prev=nodeToInsert;
temp->next=nodeToInsert;
nodeToInsert->prev=temp; 

}
int main(){

    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,30);
    print(head);
    deleteNode(1,head);
    print(head);

    return 0;
}
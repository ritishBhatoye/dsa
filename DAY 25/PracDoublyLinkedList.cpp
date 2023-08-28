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
};
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr =head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
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

    Node* n1=new Node(input());
    Node* head=n1;
    Node* tail=n1;
    insertAtHead(head,input());
    print(head);
    insertAtHead(head,input());
    print(head);
    insertAtHead(head,input());
    print(head);
    cout<<"AT 1 POSITION "<<endl;
    insertAtPosition(tail,head,1,input());
    print(head);

    return 0;
}
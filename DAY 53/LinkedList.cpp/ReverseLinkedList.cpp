#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
//print LINKED LIST
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

//insertion at head
void insertAtHead(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    newNode->next=temp;
    head=newNode;
}
//insertion at Tail
void insertAtTail(Node* &tail,int data)
{
  
  Node* newNode=new Node(data);
  tail->next=newNode;
}
//insert at any position
void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    Node* temp=head;
    int cnt=0;
//Starting position
if(position==1){
    insertAtHead(head,data);
    return ;
}
 while(cnt<position-1)
{
    temp=temp->next;
cnt++;
}
if(temp->next==NULL){
    insertAtTail(tail,data);
    return ;
}
else{
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode; 
}
}
//RESERVE LINKED LIST USING RECURSION
void recReverseLL(Node* &head,Node* &curr,Node* &prev){
    //base case
    if(curr==NULL){
        head=prev;
        return ;
    }
    Node* forward=curr->next;
        //recursive call
    recReverseLL(head,forward,curr);
    curr->next=prev;
}
void usingRecursion(Node* &head){
    Node* forward=NULL;
    Node* prev=NULL;
    Node* curr=head;
    recReverseLL(head,curr,prev);
   print(head);

}
void reverseLL(Node* &head)
{

    Node* curr=head;
    Node* prev=NULL;
    Node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    print(prev);
}
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtHead(head,40);
    print(head);
    insertAtTail(tail,840);
    print(head);
    insertAtPosition(head,tail,2,-7);
    print(head);
    reverseLL(head);
    usingRecursion(head);
    print(head);

    cout<<endl<<endl;
    return 0;
}
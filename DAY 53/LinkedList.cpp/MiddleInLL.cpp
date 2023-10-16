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
//print or traversing
void print(Node* &head)
{
   Node* temp=head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl<<endl;
}

//insertion at Head
void insertAtHead(Node* &head,int data)
{
    Node* n=new Node(data);
    n->next=head;
    head=n;
}
//insertion at tail
void insertAtTail(Node* &tail,int data){
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;
}
//insertion At Position
void insertionAtPosition(Node* &head,Node* &tail,int position,int data)
{
    Node* temp=head;
    if(position==1){
        insertAtHead(head,data);
        return ;
    }
    int cnt=0;
   while(cnt<position-1)
   {
     temp=temp->next;
     cnt++;
   }
   if(temp->next==NULL){
    insertAtTail(tail,data);
    return ;
   }
   else
   {
      Node* newNode=new Node(data);
      newNode->next=temp->next;
      temp->next=newNode;

   }
}
//middle element or node
int getLength(Node* &head)
{
    Node* temp=head;
    int l=0;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}
Node* findMiddleNode(Node* &head){
    int len=getLength(head);
    int ans=len/2;
    Node* temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}
int main(){
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,30);
    print(head);    
    insertAtTail(tail,40);
    print(head);
    insertAtTail(tail,50);
    print(head);
    Node* ans=findMiddleNode(head);
    cout<<ans->data;
    cout<<endl<<endl;
    return 0;
}
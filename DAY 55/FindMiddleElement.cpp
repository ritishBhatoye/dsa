#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    public:
    //creating node
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

//print or traverse
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
//insert at head
void insertAtHead(Node* &head,int data)
{

   Node* newNode=new Node(data);
   newNode->next=head;
   head=newNode;
}
//insert at tail
void insertAtTail(Node* &tail,int data)
{
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;
}
//insert at any position
void insertAtPostion(Node* &head,Node* &tail,int position,int data)
{
   //inserting at start or head
   if(position==1)
   {
     insertAtHead(head,data);
     return ;
   }
   else
   {
   
    int cnt=0;
    Node* temp=head;
    while(cnt<position)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
      insertAtTail(tail,data);
    }
    else
    {   
         //in between
        
        Node* newNode=new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
    }
   }
}
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

Node* FindMiddle(Node* &head)
{
    Node* temp=head;
    int len=getLength(head);
    int ans=len/2;
    int cnt=0;
    while(cnt<ans)
    {
        temp=temp->next;
        cnt++;
    }
    return temp;
}
//
Node* getMiddle(Node* &head)
{
    Node* fast=head->next;
    Node* slow=head;
    Node* temp=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;    
}
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtHead(head,5);
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,30);
    print(head);
    Node* ans=FindMiddle(head);
    cout<<ans->data<<endl;
    Node* ans1=getMiddle(head);
    cout<<ans1->data<<endl;
    return 0;
}
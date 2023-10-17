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
   else{
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
void reverseLL(Node* &head)
{
    Node* forward=NULL;
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    print(prev);
}

void RemoveDup(Node* &head)
{   
    Node* t=head;
    //NULL
  if(head==NULL){
return ; 

  }
  Node* curr=t;
  while(curr!=NULL){
    if((curr->next!=NULL) && curr->data==curr->next->data)
    {
      
    Node* temp=curr->next->next;
    Node* nodeDel=curr->next;

    delete(nodeDel);
    curr->next=temp;
      
  }
  else{
    curr=curr->next;
  }
}
t=head;
print(t);
}
Node* removeDupUnsorted(Node* &head)
{
if(head==NULL){
    return NULL;
}
Node* curr=head;
while(curr!=NULL){
    Node* prev=curr;
    Node* temp=curr->next;
    while(temp!=NULL){
        if(curr->next!=NULL && curr->data==temp->data)
        {
           Node* target=temp;
           temp=temp->next;
           prev->next=temp;
           delete(target);
        }
       else
       {
          prev=temp;
          temp=temp->next;
       }
    }
    curr=curr->next;
}
return head;
}

int main()
{
    Node* n=new Node(100);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtTail(tail,30);
    print(head);
    insertAtTail(tail,5);
    print(head);
    Node* ans=removeDupUnsorted(head);
    print(ans);
    // removeDupUnsorted(head); 
    // print(head);
    cout<<endl;
    
    
    return 0;
}
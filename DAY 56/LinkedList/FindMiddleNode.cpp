#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
    ~Node(){
        if(this->next==NULL)
        {
           delete next;
           next=NULL; 
        }
    }
};
//insertion
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp=tail;
}
//printing
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
 Node* temp=head;
 if(position==1)
 {
    insertAtHead(head,data);
    return ;
 }
 else
 {
    int cnt=1;
    while(cnt<position)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
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
}

void deleteNode(Node* &head,int position)
{
    if(position==1){
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    
    delete temp;
    }
   else 
   {
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<position)
    {
    prev=curr;
    curr=curr->next;
    cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
   }
}
int getLength(Node* &head){
    int l=0;
    Node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
//finding middle element
Node* getMiddleNode(Node* &head){
int ans=getLength(head);
if(ans%2==0){
    ans=ans/2-1;
}
else
{
    ans=ans/2;
}
int cnt=0;
Node* temp=head;
while(cnt<ans)
{
    temp=temp->next;
    cnt++;
}
return temp;
}
int main()
{
    Node* n=new Node(10);
    Node* head= n;
    Node* tail=n;
    cout<<endl<<endl;
    print(head);
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtTail(tail,400);
    print(head);
    insertAtPosition(head,tail,2,-9);
    print(head);
    // deleteNode(head,5);
    // print(head);
    Node* ans=getMiddleNode(head);
    cout<<ans->data<<endl;
    return 0;
}
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
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
 };

void insertAtHead(Node* &head,int data)
{
   
   Node* temp=new Node(data);
   //pointing next to head
   temp->next=head;
   //moving head;
   head=temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp; 

}
void print(Node* &head)
{
    Node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtPosition(Node* &head,int pos,int data){
    int cnt=1;
    Node* newNode=new Node(data);
    Node* temp=head;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    newNode->next=temp->next;
    temp->next=newNode;
}

void delNode(Node* &head,Node* &tail,int pos){
    if(pos==1)
    {
       Node* temp=head;
       head=head->next;

       delete temp;
    }

    else
    {
       Node* curr=head;
       Node* prev=NULL;
      
       int cnt=1;
       while(cnt<pos)
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

Node* newL(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    
    while(curr->next!=NULL)
    {

         prev=curr;
         curr=curr->next;

         if(prev->data==curr->data)
         {
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
         }
    }
    return head;
}
int size(Node* head){
    Node* temp=head;
    
    int cnt=0;
    while(temp->next!=NULL)
    {
    temp=temp->next;     
    cnt++;
    }
    return cnt;
}

// void delNode(Node* &head,Node* &tail,int pos){
//     Node* prev=NULL;
//     Node* curr=head;

//     int cnt=1;

//     while(cnt<=pos-1)
//     {
//         prev=curr;
//         curr=curr->next;
//         cnt++;
//     }

//     prev->next=curr->next;
//     curr->next=NULL;
//     delete curr;


// }
int main()
{
Node* head=new Node(10);
Node* tail=head;
cout<<endl<<endl;
cout<<"DATA :- "<<head->data<<endl;
cout<<"ADDRESS :- "<<head->next<<endl;
cout<<endl;

insertAtTail(tail,10);
insertAtTail(tail,30);
insertAtTail(tail,50);
insertAtPosition(head,4,50);
print(head);

cout<<endl;
// insertAtPosition(head,2,-50);
// print(head);
// cout<<endl;
// delNode(head,tail,2);
print(head);
cout<<endl;
cout<<"SIZE :- "<<size(head)<<endl;
Node* ans=newL(head);
print(ans);
cout<<endl<<endl;

}
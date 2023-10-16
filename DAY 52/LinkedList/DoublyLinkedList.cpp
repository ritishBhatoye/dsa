#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
    if(this->next!=NULL)
        {
           delete next;
           next=NULL;

        }
    }
};

//printing linked list
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
     cout<<temp->data<<" ";   
     temp=temp->next;

    }
    cout<<endl;
}
//insertion at Head
void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
//insertion at tail
void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
//insertion 
void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    int cnt=0;
if(position==1)
    {
    Node*temp=head;
    insertAtHead(head,data);
    return ;
    }
else
{
Node* temp=head;
while(cnt<position-1)
{
temp=temp->next;
cnt++;
}
if(temp->next==NULL)
{
insertAtTail(tail,data);
return ;
}
Node* newNode=new Node(data);
newNode->next=temp->next;
temp->next->prev=newNode;
temp->next=newNode;
}    
}
//deletion
void deleteNode(Node* &head,Node* &tail,int position){
    //DELETING START OR HEAD NODE
        Node* temp=head;

    if(position==1)
    {   
        temp->next->prev=NULL;
        head=temp->next;

        temp->next=NULL;

        delete temp;
    }
    //DELETING LAST NOTDE
    else{
        int cnt=1;
        Node* c=temp;
        Node* p=NULL;
        while(cnt<position){
            p=c;
            c=c->next;
            cnt++;
        }
       if(c->next==NULL){
        c->prev=NULL;
        p->next=NULL;
        tail=p;
        delete c;

       }
        else
        {p->next=c->next;
        c->next->prev=p;
        c->next=NULL;
        c->prev=NULL;
        delete c;}

    }
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
    cout<<"INSERTING AT 1 POSITION : "<<endl;
    insertAtPosition(head,tail,1,-9);
    print(head);   
    cout<<"INSERTING AT LAST POSITION : "<<endl;
    insertAtPosition(head,tail,3,1000);
    print(head);
    cout<<"INSERTING AT LAST POSITION : "<<endl;
    insertAtPosition(head,tail,2,-5);
    print(head);
    cout<<"DELETING FIRST NODE : "<<endl;
    deleteNode(head,tail,1);
    print(head);
    cout<<"DELETING 3rd NODE : "<<endl;
    deleteNode(head,tail,3);
    print(head);

    cout<<"DELETING LAST NODE : "<<endl;
    deleteNode(head,tail,4);
   
    print(head);
   


    return 0;
}
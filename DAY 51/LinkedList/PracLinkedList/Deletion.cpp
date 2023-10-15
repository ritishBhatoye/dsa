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
        int val=this->data;
        if(this->next!=NULL)
        { 
           delete next;
           next=NULL;

        }
    }
};

//INSERTION AT HEAD
void insertionAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    //moving temp to head
    head=temp;
}

//INSERTION AT TAIL
void insertionAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
//INSERTION AT POSITION

void insertionAtPosition(Node* &head,Node* &tail,int position,int data)
{
    //for ELEMENT AT START
    if(position==1){
        insertionAtHead(head,data);
        return ;
    }
    Node* temp=head;
    int cnt=0;
    while(cnt<position-1)
    { 
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        //inserting AT TAIL
        insertionAtTail(tail,data);
        return ;
    }
    //CREATING NEW NODE
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
}


//DELETION 
void deleteNode(Node* &head,int position)
{
//for head element
if(position==1)
{
  Node* temp=head;
  head=head->next;
  temp->next=NULL;
  //memory FREE
   delete temp;
}
else
{
//deleting last node or in between
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
//print or traverse linked list

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}


int main()
{
    Node* n=new Node(10);
    Node* head=n; 
    Node* tail=n;
    cout<<endl<<endl;

    print(head);
    insertionAtTail(tail,20);
    print(head);
    insertionAtTail(tail,30);    
    print(head);
    insertionAtTail(tail,40);
    print(head);
    cout<<"INSERT AT 2 POSITION : "<<endl;
    insertionAtPosition(head,tail,2,9);
    print(head);
    cout<<"INSERT AT 1 POSITION : "<<endl;
    insertionAtPosition(head,tail,1,1);
    print(head);
    cout<<"INSERT AT LAST POSITION : "<<endl;
    insertionAtPosition(head,tail,6,100);
    print(head);
    cout<<"DELETION : "<<endl;
    cout<<"DELETION AT HEAD : "<<endl;
    deleteNode(head,1);
    print(head);
    cout<<"DELETION AT TAIL : "<<endl;
    deleteNode(head,6);
    print(head);
    cout<<"DELETION AT 2 POSITION : "<<endl;
    deleteNode(head,2);
    print(head);

    cout<<endl<<endl;
    
    return 0;
}
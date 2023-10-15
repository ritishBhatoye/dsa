#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next=NULL;
    
    //creating node
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int val=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<" MEMORY IS FREE FOR NODE WITH DATA "<<val<<endl;
    }
};

//INSERTING AT STARTING or HEAD
void InsertAtHead(Node* &head,int data)
{
    Node* newNode=new Node(data);
    
    newNode->next=head;
    head=newNode;
}

//Inserting at TAIL or END
void InsertAtTail(Node* &tail,int data)
{
     Node* newNode=new Node(data);
     
     tail->next=newNode;
     
     tail=newNode;
}
//Insertion at N position
void InsertionAtPosition(Node* &tail,Node* &head,int position,int data)
{
    Node* temp=head;
    int cnt=0;
    //for inserting at HEAD
    if(position==1)
    {
      InsertAtHead(head,data);  
      return ;
    }
    while(cnt<position-1)
    {   
        temp=temp->next;
        cnt++;
    }
    
    //inserting at LAST POSITION
     if(temp->next==NULL)
     {
        InsertAtTail(tail,data);
        return ;
     }
    
    //creating new node
    Node* newNode=new Node(data);

    newNode->next=temp->next;
    temp->next=newNode;

}
//DELETION IN LINKED LIST
void deleteNode(int position,Node* &head)
{

    //deleting first or start node
    if(position==1)
    {
        Node* temp=head;
    //HEAD KO AGGE BADA DIA
     head=head->next;
     temp->next=NULL;
    //memory FREEM START NODE
     delete temp;
    }
    else
    {
        //Deleting last NODE
         Node* curr=head;
         Node* prev=NULL;

         int cnt=1;
         while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
         }
         //DELETING 
         prev->next=curr->next;
         curr->next=NULL;
         delete curr;
    }

}
//traversing or PRINTING
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
int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n; 
    cout<<endl<<endl;
    print(head);
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    print(head);
    InsertAtTail(tail,40);
    print(head);
    cout<<"INSERTING AT 2 POSITION      : "<<endl;
    InsertionAtPosition(tail,head,2,9);
    print(head);
    cout<<"INSERTING AT LAST POSITION   : "<<endl;
    InsertionAtPosition(tail,head,5,80);
    print(head);
    cout<<"INSERTING AT FIRST POSITION  : "<<endl;
    InsertionAtPosition(tail,head,1,1);
    print(head);
    cout<<"DELETING : "<<endl;
    deleteNode(1,head);
    print(head);
    cout<<endl;

    return 0;
}
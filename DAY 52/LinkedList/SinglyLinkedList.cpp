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
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

//printing Traversing
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

//insertion at head
void insertAtHead(Node* &head,int data){
    //creating node
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
//insertion at tail
void insertionAtTail(Node* &tail,int data)
{
    //creating node
    Node* temp=new Node(data);
    tail->next=temp;
    //UNECESSARY OR OPTIONAL
    temp->next=NULL;
    tail=temp;
}
//insertion at position

void insertionAtPosition(Node* &head,Node* &tail,int position,int data)
{
    //inserting at head
    if(position==1){
        insertAtHead(head,data);
        return ;
    }

    else
    {
          Node* temp=head;
          int cnt=0;
          while(cnt<position-1)
          {
             temp=temp->next;
             cnt++;
          }
          if(temp->next==NULL){
            //inserting at tail
            insertionAtTail(tail,data);
            return ;
          }
          //inserting in between
          Node* newNode=new Node(data);
          newNode->next=temp->next;
          temp->next=newNode;
    }
}
//deletion code

void deleteNode(Node* &head,Node* &tail,int position)
{

    if(position==1)
    {
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
    insertionAtTail(tail,50);
    print(head);
    cout<<"INSERTION AT FIRST "<<endl;
    insertionAtPosition(head,tail,1,-9);
    print(head);
    cout<<"INSERTION AT LAST "<<endl;
    insertionAtPosition(head,tail,5,1000);
    print(head);
    cout<<"INSERTION IN BETWEEN "<<endl;
    insertionAtPosition(head,tail,3,-18);
    print(head);
    cout<<"DELETING FIRST NODE "<<endl;
    deleteNode(head,tail,1);
    print(head);
    cout<<"DELETING LAST NODE "<<endl;
    deleteNode(head,tail,7);
    print(head);
    cout<<"DELETING 3rd NODE "<<endl;
    deleteNode(head,tail,3);
    print(head);

    cout<<endl<<endl;
    
    return 0;
}
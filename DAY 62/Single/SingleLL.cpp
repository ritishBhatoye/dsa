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
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
//get length
int getLength(Node* &head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
return cnt;
}

//insertion at HEAD
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &head,Node* &tail,int data)
{
    Node* temp=new Node(data);
    if(head==NULL){
        tail=temp;
        return ;
    }
    else
    {
    tail->next=temp;
    tail=temp;    
    }
}
void insertAtPos(Node* &head,Node* &tail,int pos,int data){
    int len=getLength(head);
 
    if(pos==1){
        insertAtHead(head,data);
        return ;
    }
    else if(pos==len){
        insertAtTail(head,tail,data);
        return ;
    }
    else{
         Node* temp=head;
        int cnt=1;
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        //reached
        Node* newNode=new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
void deletionFromHead(Node* &head){
    Node* temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}
void deleteNode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        deletionFromHead(head);
        return ;
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
      //reached at POSITION
      prev->next=curr->next;
      curr->next=NULL;
      delete curr;
    }
}
void print(Node* &head)
{
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
    cout<<endl;

}

int main()
{
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    cout<<"DATA : "<<n->data<<" "<<endl;
    cout<<"NEXT : "<<n->next<<" "<<endl;
    cout<<endl;
    int k;
    cout<<"ENTER THE NUMBER OF ELEMENT YOU WANT TO INSERT IN LL :- "<<endl;
    cin>>k;
    
    for(int i=0;i<k;i++){
        int d;
        cin>>d;
        insertAtTail(head,tail,d);
        cout<<endl;
        cout<<"DATA : "<<tail->data<<endl;
        cout<<"NEXT : "<<tail->next<<endl;
        cout<<endl;
        print(head);
        cout<<endl;
    }
    int p;
    cout<<"ENTER THE POSITION AT WHICH DATA TO BE INSERTED  :- ";
    cin>>p;
    int data;
    cout<<"ENTER THE DATA : ";
    cin>>data;
    insertAtPos(head,tail,p,data);
    print(head);
    cout<<endl;
    cout<<"DELETION FROM START : "<<endl;
    int pos;
    cout<<"ENTER THE POSITION TO DELETE NODE :- ";
    cin>>pos;
    print(head);
    cout<<endl;
    deleteNode(head,tail,pos);
    print(head);
    cout<<endl;
    cout<<endl<<endl;
    return 0;
}
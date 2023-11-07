#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next==NULL){
            delete next;
            this->next=NULL;
        }
    }
};
Node* reverseLL(Node* &head)
{
Node* curr=head;
Node* prev=NULL;
Node* forw;
while(curr!=NULL){
    forw=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forw;
}
return prev;
}
//inserting at head
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
//inserting at tail
void insertAtTail(Node* &tail,int data){
    //creating new node
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
//insertion at position
void insertAtPos(Node* &head,Node* &tail,int pos,int data){
    if(pos==1){
        insertAtHead(head,data);
        return ;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return ;
    }
    //postion reached
    //creating node
    Node* n=new Node(data);
    n->next=temp->next;
    temp->next=n;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* removeDup(Node* &head)
{
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
  while(curr!=NULL)
  {
    if((curr->next!=NULL) && curr->data==curr->next->data)
      { 
        Node* nextN=curr->next->next;
        Node* NodeToDel=curr->next;
        delete(NodeToDel);
         curr->next=nextN;
 
      }
    else{
          
            curr=curr->next;
     }
    }
    
    return head;
    }

int main(){
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;

    cout<<endl<<endl;
    cout<<"DATA : "<<n->data<<endl;
    cout<<"NEXT : "<<n->next<<endl;
    // int e;
    // cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO INSERT : ";
    // cin>>e;
    // for(int i=0;i<e;i++){
    //     int d;
    //     cout<<endl;
    //     cin>>d;
    //     insertAtHead(head,d);
    //     cout<<endl;
    //     cout<<"DATA : "<<head->data<<endl;
    //     cout<<"NEXT : "<<head->next<<endl;
    //     cout<<endl<<endl;
    //     print(head);
    // }
    cout<<endl<<endl;
    int t;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO INSERT  AT TAIL : ";
    cin>>t;
    for(int i=0;i<t;i++){
        int d;
        cout<<endl;
        cin>>d;
        insertAtTail(tail,d);
        cout<<endl;
        cout<<"DATA : "<<tail->data<<endl;
        cout<<"NEXT : "<<tail->next<<endl;
        cout<<endl<<endl;
        print(head);
    }
    cout<<endl<<endl;
    Node* nLL=removeDup(head);
    cout<<endl;
    cout<<"AFTER REMOVING DUPLICATES FROM SORTED LINKED LIST : "<<endl;
     
    print(nLL);
    // int pos;
    // int data;
    // cout<<"ENTER THE DATA TO BE INSERTED : ";
    // cin>>data;
    // cout<<"ENTER THE POSITION  AT WHICH NODE TO BE INSERTED : ";
    // cin>>pos;
 
    // insertAtPos(head,tail,pos,data);
    // print(head);
    
    cout<<endl;
    cout<<endl;

    return 0;
}
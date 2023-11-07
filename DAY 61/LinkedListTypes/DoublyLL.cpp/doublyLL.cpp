#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
int getLength(Node* &head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    temp->prev=tail;
    tail->next=temp;
    tail=tail->next;
}

void insertAtPos(Node* &head,Node* &tail,int pos,int data){

    if(pos==1){
        insertAtHead(head,data);
        return ;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos){
        temp=temp->next;
        cnt++;
    }
    //position REACHED
    //creating NODE
    if(temp->next==NULL)
    {
       insertAtTail(tail,data);
       return ;
    }
    Node* n=new Node(data);
    n->prev=temp;
    n->next=temp->next;
    temp->next=n;

}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
void deletionFromHead(Node* &head)
{
   Node* temp=head;
   temp->next->prev=NULL;
   head=temp->next;
   temp->next=NULL;
   delete temp;
}
void deleteFromTail(Node* &tail){
    Node *temp=tail;
    tail=temp->prev;
    temp->prev->next=NULL;
    temp->prev=NULL;
    delete temp;
}
void deleteNode(Node* &head,Node* &tail,int pos){
    int len=getLength(head);
    if(pos==1)
    {
        deletionFromHead(head);
        return ;
    }
   else if(pos==len){
    deleteFromTail(tail);
    return ;
   }
   else
   { Node* curr=head;
    Node* p=NULL;
    int cnt=1;
    while(cnt<pos){
        p=curr;
        curr=curr->next;
        cnt++;
    }
    //position reached
    p->next=curr->next;
    curr->next->prev=p;
    curr->next=NULL;
    curr->prev=NULL;

    delete curr;}

}
int main(){
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NEXT : "<<head->next<<endl;
    cout<<"PREV : "<<head->prev<<endl;
    print(head);
    cout<<endl<<endl;
    insertAtHead(head,20);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NEXT : "<<head->next<<endl;
    cout<<"PREV : "<<head->prev<<endl;
    print(head);
    cout<<"LENGTH OF LL : "<<getLength(head)<<endl;    
    insertAtTail(tail,100);
    cout<<"DATA : "<<tail->data<<endl;
    cout<<"NEXT : "<<tail->next<<endl;
    cout<<"PREV : "<<tail->prev<<endl;
    print(head);
    cout<<"LENGTH OF LL : "<<getLength(head)<<endl;  
    insertAtPos(head,tail,1,1);
    // cout<<"DATA : "<<tail->data<<endl;
    // cout<<"NEXT : "<<tail->next<<endl;
    // cout<<"PREV : "<<tail->prev<<endl;
    print(head);
    cout<<"LENGTH OF LL : "<<getLength(head)<<endl;
    cout<<"DELETION FROM HEAD "<<endl;
    int pos;
    cout<<"ENTER THE POSITION : "<<endl;
    cin>>pos;
    deleteNode(head,tail,pos);
    print(head);
    cout<<"LENGTH OF LL : "<<getLength(head)<<endl;

    cout<<endl<<endl;
    return 0;
}
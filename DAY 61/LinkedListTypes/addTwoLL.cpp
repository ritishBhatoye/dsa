#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
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
void insertAtTail(Node* & head,Node* &tail,int data){
    Node* temp=new Node(data);

    //creating new node
    if(head==NULL){
        tail=temp;
        return ;
    }

{  
    tail->next=temp;
    tail=temp;
}}
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
        insertAtTail(head,tail,data);
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

 Node* add(struct Node* first,struct Node* second){
     int carry=0;
     Node* ansHead=NULL;
     Node* ansTail=NULL;
     while(first!=NULL && second!=NULL)
     {
        int sum=carry +first->data + second->data;

        int digit=sum%10;

        
        insertAtTail(ansHead,ansTail,digit);

        carry=sum/10;

        first=first->next;
        second=second->next;
     }
     while(first!=NULL )
     {
        int sum=carry +first->data;

        int digit=sum%10;

        
        insertAtTail(ansHead,ansTail,digit);

        carry=sum/10;
        first=first->next;
        
     }
     while( second!=NULL)
     {
        int sum=carry + second->data;

        int digit=sum%10;

        
        insertAtTail(ansHead,ansTail,digit);

        carry=sum/10;
        second=second->next;
     }
     while(carry!=0)
     {
        int sum=carry;

        int digit=sum%10;

        
        insertAtTail(ansHead,ansTail,digit);

        carry=sum/10;

     }
     return ansHead;
}

Node* addTwoLLists(struct Node* first,struct Node* second)
{
    //step 1 - reverse input LL
    first=reverseLL(first);
    second=reverseLL(second);

    //step 2 - add 2 LL
    Node* ans=add(first,second);

    //step 3 
    ans=reverseLL(ans);

    return ans;
};

int main(){
    Node* n=new Node(4);
    Node* head=n;
    Node* tail=n;

    Node* n1=new Node(3);
    Node* h1=n1;
    Node* t1=n1;

    cout<<endl<<endl;
    cout<<"DATA : "<<n->data<<endl;
    cout<<"NEXT : "<<n->next<<endl;
   
    cout<<endl<<endl;
    int t;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO INSERT  AT TAIL : ";
    cin>>t;
    for(int i=0;i<t;i++){
        int d;
        cout<<endl;
        cin>>d;
        insertAtTail(head,tail,d);
        cout<<endl;
        cout<<"DATA : "<<tail->data<<endl;
        cout<<"NEXT : "<<tail->next<<endl;
        cout<<endl<<endl;
        print(head);
    }
    cout<<endl<<endl;
   // Node* r=reverseLL(head);
    print(head);
    cout<<endl;
    cout<<endl;

    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO INSERT  AT TAIL : ";
    cin>>t;
    for(int i=0;i<t;i++){
        int d;
        cout<<endl;
        cin>>d;
        insertAtTail(h1,t1,d);
        cout<<endl;
        cout<<"DATA : "<<t1->data<<endl;
        cout<<"NEXT : "<<t1->next<<endl;
        cout<<endl<<endl;
        print(h1);
    }
    cout<<endl<<endl;
    print(h1);
    Node* a=addTwoLLists(n,n1);
    print(a);
    cout<<endl;
    cout<<endl;
    return 0;
}
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
            next=NULL;
        }
    }
};

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}

bool checkSize(Node* &head,int k)
{
int cnt=0;
Node* temp=head;
while(temp!=NULL && cnt<k)
{
   temp=temp->next;
   cnt++;
}

if(cnt==k){
    return true;
}

return false;
}

Node* kReverse(Node* &head,int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;

    if(checkSize(head,k))
    {
        Node* curr=head;
        Node* nxt=NULL;
        Node* prev=NULL;

        while(curr!=NULL && cnt<k){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            cnt++;
        }
        if(nxt!=NULL)
        {
            head->next=kReverse(nxt,k);
        }
        return prev;
    }
    else
    {
       return head;
    }
}
int main()
{
    cout<<endl<<endl;
    Node* n=new Node(5);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,4);
    insertAtTail(tail,3);
    insertAtTail(tail,7);
    insertAtTail(tail,9);
    insertAtTail(tail,2);

    cout<<endl;
    print(head);
    Node* ans=kReverse(head,4);
    print(ans);
     
    cout<<endl<<endl;
    
    return 0;
}
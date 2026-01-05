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
};


void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=tail->next;

}

void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }    
}

Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;

    Node* temp=NULL;

    while(curr!=NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }

    return prev;
}
int length(Node* &head)
{

    Node* temp=head;
    int cnt=0;

    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }

    return cnt;
}

Node* reverseK(Node* &head,int k)
{
    Node* st=head;
    Node* end=head;

    int cnt=1;

    while(cnt!=k)
    {
        end=end->next;
        cnt++;
    }

    Node* preserve=end->next;
    end->next=NULL;

    Node* newNode=reverse(st);
    
   

    Node* itr=newNode;

    while(itr->next!=NULL)
    {
        itr=itr->next;

    }

    itr->next=preserve;
    return newNode;
}

Node* reverseKGroup(Node* &head,int k)
{
    int n=length(head);
    Node* newHead;

    while(k<=n)
    {
        n=n-k;
        newHead=reverseK(head,k);
    }
    return newHead;
}

int main()
{
    cout<<endl<<endl;
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;

    int k;
    cout<<"Enter the value for  K :- ";
    cin>>k;
    Node* ans= reverseKGroup(head,k);

    print(ans);
    cout<<endl<<endl;

}
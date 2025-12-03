#include<iostream>
using namespace std;

class Node
{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node* &head,int data)
{
    Node* temp= new Node(data);

    head->prev=temp;
    temp->next=head;
    head=temp;
    
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

void printReverse(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}


void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPostion(Node* &head,int data,int position)
{
    Node* temp=head;
    Node* iNode=new Node(data);
    int cnt=1;

    while(cnt!=position-1)
    {
        temp=temp->next;
        cnt++;
    }

    iNode->next=temp->next;
    temp->next=iNode;
    iNode->prev=temp;


}

void deleteNode(Node* &head,int k)
{
    Node* curr=head;
    Node* p=NULL;
    int cnt=1;

    while(cnt<=k-1)
    {
        p=curr;
        curr=curr->next;
        cnt++;
    }

    p->next=curr->next;
    curr->next->prev=p;
    
    delete curr;
}

int main()
{
    cout<<endl<<endl;
    Node* n=new Node(10);
    cout<<endl<<endl;
    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);

    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<"Printing in the reverse order :- ";
    printReverse(tail);

    cout<<endl<<endl;
    int k;
    cout<<"Enter the position at which you want to insert the data :- ";
    cin>>k;
    int data;
    cout<<"Enter the element you want to :- ";
    cin>>data;
    cout<<endl<<endl;
    insertAtPostion(head,data,k);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Enter the position of node that you want to delete :- ";
    int delNode;
    cin>>delNode;
    deleteNode(head,delNode);
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
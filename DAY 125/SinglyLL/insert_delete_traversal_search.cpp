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

void insertAtHead(Node* &head,int data)
{
    Node* nodeToInsert=new Node(data);

    nodeToInsert->next=head;
    head=nodeToInsert;
}
void insertAtTail(Node* &tail,int data)
{

    Node* nodeInsert=new Node(data);

    tail->next=nodeInsert;
    tail=nodeInsert;
}

void insertAtK(Node* &head,int data,int k)
{
    Node* temp=head;
    Node* nodeInsert=new Node(data);
    int cnt=1;

    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }

    nodeInsert->next=temp->next;
    temp->next=nodeInsert;
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

int main()
{
    cout<<endl<<endl;
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    print(head);

    cout<<endl<<endl;
    cout<<endl<<endl;
    
    cout<<"Enter data for the Node you want to insert :- ";
    int data;
    cin>>data;
    cout<<"Enter the position :- ";
    int k;
    cin>>k;
    insertAtK(head,data,k);
    print(head);
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;
  
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
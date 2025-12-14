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
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);

    temp->next=head;
    head->prev=temp;
    head=temp;

}  

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}

void insertAtK(Node* &head,int data,int k)
{
    Node* temp=head;
    Node* nodeToAdd=new Node(data);
    int cnt=1;
    while(cnt<k-1)
    {
        cnt++;
        temp=temp->next;
    }
    nodeToAdd->next=temp->next;
    temp->next=nodeToAdd;
    nodeToAdd->prev=temp;
}

void insertBeforeGivenNode(Node* &head,int givenNodeData,int data)
{
    Node* temp=head;
    Node* nodeToAdd=new Node(data);

    while(temp->next->data<givenNodeData)
    {
        temp=temp->next;
    }
    // cout<<temp->data<<" ";
    nodeToAdd->next=temp->next;
    temp->next=nodeToAdd;
    nodeToAdd->prev=temp;

}


void deletionAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    delete temp;

}  
void deletionAtTail(Node* &tail)
{
    Node* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete temp;
}
void deleteKNode(Node* &head,int k)
{
    Node* temp=head;
    int cnt=1;
    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }
    Node* temp2=temp;
    temp->next=temp->next->next;
    temp2->n
 
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
    Node* n=new Node(10);
    cout<<endl<<endl;
    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    cout<<endl<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    // int k;
    // cout<<"Enter the position where you want to insert the data :- ";
    // cin>>k;
    // int data;
    // cout<<"Enter the data which you want to insert :- ";
    // cin>>data;
    deletionAtHead(head);
    cout<<"After deletion at head :- "<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<"After deletion at tail :- "<<endl;

    deletionAtTail(tail);
    cout<<endl<<endl;
    print(head);
    // insertBeforeGivenNode(head,k,data);
    cout<<endl<<endl;
    int k;
    cout<<"Enter the position for which you want to delete the node :- "<<endl;
    cin>>k;
    cout<<endl<<endl;

    deleteKNode(head,k);
    print(head);
    cout<<endl<<endl;

    // cout<<endl<<endl;
    // insertAtK(head,data,k);
    // cout<<endl<<endl;
    // print(head);

    // cout<<endl<<endl;

    return 0;
}
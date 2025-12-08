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

void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

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
    Node* nodeToInsert=new Node(data);
    Node* temp=head;

    int cnt=1;
    
    while(cnt<k-1)
    {
        cnt++;
        temp=temp->next;
    }

    nodeToInsert->next=temp->next->next;
    nodeToInsert->prev=temp;
    temp->next=nodeToInsert;
}




void deletionAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    head->prev=NULL;

    delete temp;

}

void deletionAtTail(Node* &tail)
{
    Node* temp=tail;
    tail->prev->next=NULL;
    tail=tail->prev;

    delete temp;
}
void deletionAtK(Node* &head,int k)
{
    Node* temp=head;
    int cnt=1;

    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }

    Node* nodeToDelete=temp->next;
    temp->next->prev=NULL;

    temp->next=temp->next->next;

    delete nodeToDelete;
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
    insertAtTail(tail,60);
    cout<<endl<<endl;
    int k,d;
    cout<<"Enter the position where you want to add the node :- ";
    cin>>k;
    cout<<"Enter the data for the new NODE  :- ";
    cin>>d;
    cout<<endl<<endl;
    insertAtK(head,d,k);
    print(head);
    cout<<endl<<endl;

    print(head);
    deletionAtHead(head);
    cout<<"After deletion at head :- "<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<"After deletion at tail :- "<<endl;
    deletionAtTail(tail);
    print(head);
    cout<<endl<<endl;
    int del;
    cout<<"Enter which node you want to delete :- ";
    cin>>del;
    deletionAtK(head,del);deletionAtK
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
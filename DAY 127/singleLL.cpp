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

void insertAtHead(Node* &head,int k)
{
    Node* temp=new Node(k);
    
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int k)
{
    Node* temp=new Node(k);

    tail->next=temp;
    tail=temp;

}

void insertAtK(Node* &head,int data,int k)
{
    if(k==0)
    {
        insertAtHead(head,data);
    }
    Node* temp=new Node(data);
    Node* itr=head;
    int cnt=1;

    while(cnt<k-1)
    {
        itr=itr->next;
        cnt++;
    }

    temp->next=itr->next;
    itr->next=temp;

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

// void deleteAthead()
// {

// }

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* n=new Node(10);

    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    cout<<endl<<endl;

    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int k;
    int data;
    cout<<"Enter the Node data you want to insert :- ";
    cin>>data;
    cout<<"Enter the position where you want to insert Node :- ";
    cin>>k;
    insertAtK(head,data,k);

    cout<<endl<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;

    cout<<endl<<endl;


}
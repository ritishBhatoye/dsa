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
    Node* temp=new Node(data);

    temp->next=head;
    head->prev=temp;
    head=head->prev;

}

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    temp->prev=tail;

    tail=tail->next;
}

void insertAtK(Node* &head,int data,int k)
{
    int cnt=0;

    Node* temp=head;

    while(cnt!=k-2)
    {
        temp=temp->next;
        cnt++;
    }

    Node* insert=new Node(data);
    insert->next=temp->next;
    insert->prev=temp;
    temp->next=insert;


}

//deletion 
void deleteAtHead(Node* &head)
{
        Node* temp=head;

        head=head->next;

        temp->next=NULL;
        temp->prev=NULL;

        delete temp;
}


void deleteAtTail(Node* &tail)
{
    Node* temp=tail;

    tail=tail->prev;
    tail->next=NULL;
    temp->next=NULL;
    temp->prev=NULL;

    delete temp;

}

void deleteAtK(Node* &head,int k)
{
    int cnt=0;

    Node* temp=head;

    while(cnt!=k-2)
    {
        temp=temp->next;
        cnt++;
    }

    Node* nodeToDelete=temp->next;

    temp->next=temp->next->next;
    temp->next->next->prev=temp;

    nodeToDelete->next=NULL;
    nodeToDelete->prev=NULL;

    delete nodeToDelete;

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
    Node* temp=new Node(10);

    Node* head=temp;
    Node* tail=temp;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);

    cout<<endl<<endl;
    cout<<endl<<endl;

    print(head);
    cout<<endl<<endl;

    int k;
    cout<<"Enter the position where you want to insert :- ";
    cin>>k;
    int data;
    cout<<"Enter the Node :- ";
    cin>>data;
    cout<<endl<<endl;
    insertAtK(head,data,k);
    print(head);
    cout<<endl<<endl;
    cout<<"After deleting from Head :- ";
    cout<<endl<<endl;
    deleteAtHead(head);

    print(head);
    cout<<endl<<endl;
    cout<<"After delete from Tail :- ";
    deleteAtTail(tail);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    int pos;
    cout<<"Enter the position for node that you want to delete :- ";
    cin>>pos;
    deleteAtK(head,pos);
    print(head);
    cout<<endl<<endl;


    cout<<endl<<endl;

    return 0;
}
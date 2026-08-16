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
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node* &head,int k)
{
    Node* newNode = new Node(k);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

void insertAtTail(Node* &tail,int k)
{
    Node* newNode = new Node(k);

    newNode->prev = tail;
    tail->next = newNode;
    tail = tail->next;
    
}

void deleteNode(Node* head ,int k)
{
    Node* temp = head;
    
    while(temp->next!=NULL)
    {
        if(temp->data == k)
        {
            break;
        }
        
        temp = temp->next;
        
    }

    temp->data =  temp->next->data;

    temp->next->prev = temp->prev->prev;

    temp->next =  temp->next->next;
}

void insertNode(Node* &head,int p,int k)
{
    Node* temp = head;
    int cnt = 0;
    while(cnt!=p)
    {
        temp = temp->next;
        cnt++;
    }

    Node* newNode = new Node(k);

    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev = newNode;
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node* node = new Node(10);
    cout<<endl<<endl;
    Node* head = node;
    Node* tail = node;

    cout<<endl<<endl;
    cout<<"Initial LL :- "<<endl;
    cout<<endl<<endl;

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);
    print(head);

    int k,p;
    cout<<endl<<endl;
    cout<<"Enter the Data you want to insert :- ";
    cin>>k;
    cout<<"Where you want to add Node :- ";
    cin>>p;
    insertNode(head,p,k);
    cout<<endl<<endl;
    cout<<"New LL "<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;

}
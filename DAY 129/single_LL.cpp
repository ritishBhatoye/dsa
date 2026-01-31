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
    head=temp;
}

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;

    tail=tail->next;
}

int length(Node* &head)
{
    Node* temp=head;
    int cnt=0;

    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }

    return cnt;
}

void insertAtK(Node* &head,int data,int k)
{
    int cnt=0;

    Node* itr=head;

    while(cnt!=k-1)
    {
        itr=itr->next;
        cnt++;
    }

    Node* newNode=new Node(data);
    newNode->next=itr->next;
    itr->next=newNode;

}

void deleteAtHead(Node* &head)
{   
    Node* temp=head;

    head=head->next;

    delete temp;

}
void deleteAtTail(Node* &head,Node* &tail)
{   int cnt=0;
    int n=length(head);
    
    Node* temp=head;

    while(cnt!=n-2)
    {
        cnt++;
        temp=temp->next;    
    }

    if(temp->next==tail)
    {
        delete temp->next;
    }   

    tail=temp;

}
bool searchNode(Node* head,int k)
{
    Node* temp=head;

    while(temp->data!=k)
    {

        if(temp->next==NULL)
        {
            return false;
            break;
        }
        temp=temp->next;
    }

    return true;
}


int main()
{
    cout<<endl<<endl;
    Node* node=new Node(10);

    Node* head=node;
    Node* tail=node;
    cout<<endl<<endl;
    
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    int k;
    cout<<"Enter the value for the K :- ";
    cin>>k;
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    if(searchNode(head,k))
    {
        cout<<k<<" is present in LL "<<endl;
    }
    else
    {
        cout<<k<<" is not present in LL "<<endl;
    }
    cout<<endl<<endl;
    deleteNode()
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}
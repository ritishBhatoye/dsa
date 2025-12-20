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

void inputAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);

    temp->next=head;
    head=temp;
}
void inputAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=temp;
}

Node* reverseLL(Node* &head)
{

    Node* curr=NULL;
    Node* forw=head;

    Node* temp=head;

    while(forw!=NULL)
    {
        Node* temp=forw->next;

        forw->next=curr;
        curr=forw;
        forw=temp;

    }

    return curr;
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



void print(Node* &head)
{

    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}

Node* nodeToRemove(Node* &head,int k)
{
    int n=length(head)- k + 1;
    if(n==1)
    {
    Node* nodeToDelete=head;
    head=head->next;
     
    nodeToDelete->next=NULL;

    delete nodeToDelete;
    
    }

    else
    {
        Node* temp=head;


    int cnt=1;
    while(cnt!=n-1)
    {
        cnt++;
        temp=temp->next;

    }

    Node* deleteNode=temp->next;
    temp->next=temp->next->next;

    deleteNode->next;

    delete deleteNode;
    }
    return head;
}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* node=new Node(1);
    Node* head=node;
    Node* tail=node;
    cout<<endl<<endl;
    inputAtTail(tail,2);
    inputAtTail(tail,3);
    inputAtTail(tail,4);
    inputAtTail(tail,5);

    print(head);  

    Node* removeNode=nodeToRemove(head,2);
    cout<<endl<<endl;
    cout<<endl<<endl;

    print(removeNode);
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

return 0;
}

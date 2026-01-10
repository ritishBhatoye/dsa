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

void AddToTail(Node* &tail,int size)
{
    int i=1;
    while(i<=size)
    {
        int data;
        cout<<"Enter the data at "<<i<<" :- "<<" = ";
        cin>>data;
        Node* temp=new Node(data);
        tail->next=temp;
        tail=tail->next;
        i++;
    }
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
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size for Linked List :- ";
    cin>>size;
    int d;
    cout<<"Enter the data for the "
    Node* n=new Node(d);

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
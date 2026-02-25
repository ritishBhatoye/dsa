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



//TRAVERSAL
void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//search
bool searchElement(Node* &head)
{
      Node*  
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
        temp=temp->next;
        cnt++;
    }

    return cnt;
}

int main()
{
    cout<<endl<<endl;
    Node* node=new Node(10);
    Node* tail=node;
    Node* head=node;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);

    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int n=length(head);

    cout<<endl<<endl;
    cout<<"N :- "<<n<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;




}
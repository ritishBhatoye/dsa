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


Node* addTwoNum(Node* &l1,Node* &l2)
{
    Node* t1=l1;
    Node* t2=l2;

    Node* dummyNode=new Node(-1);

    Node* ansHead=dummyNode;

    Node* ansTail=dummyNode;
    int  c=0;
    while(t1!=NULL || t2!=NULL || c)
    {
        int sum=0;

        if(t1!=NULL)
        {
            sum+=t1->data;
            t1=t1->next;
        }
        if(t2!=NULL)
        {
            sum+=t2->data;
            t2=t2->next;
        }
         
        sum+=c;

        c=sum/10;
        cout<<"c :- "<<c<<endl;
        cout<<"sum :- "<<sum<<endl;
        cout<<"sum%10 :- "<<sum%10<<endl;

        Node* newNode=new Node(sum%10);

        ansTail->next=newNode;
        ansTail=newNode;


    }
    return ansHead;
}

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=tail->next;
}

int main()
{
    cout<<endl<<endl;
    Node* node1=new Node(2);
    Node* head1=node1;
    Node* tail1=node1;

    Node* node2=new Node(5);
    Node* head2=node2;
    Node* tail2=node2;


    cout<<endl<<endl;   
    insertAtTail(tail1,4);
    insertAtTail(tail1,3);

    print(head1);
    cout<<endl<<endl;

    insertAtTail(tail1,6);
    insertAtTail(tail1,4);
    print(head2);


    Node* ans=addTwoNum(head1,head2);
    cout<<endl<<endl;
    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
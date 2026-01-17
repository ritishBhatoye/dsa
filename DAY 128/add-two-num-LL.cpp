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

void insertAtTail(Node* &tail,int data)
{
    Node* node=new Node(data);

    tail->next=node;
    tail=tail->next;
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
Node* addTwoNumbers(Node* &l1,Node* &l2)
{
    Node* t1=l1;
    Node* t2=l2;

    Node* dummy=new Node(-1);

    Node* ansHead=dummy;
    Node* ansTail=dummy;

    int carry=0;

    while(t1!=NULL || t2!=NULL || carry!=0)
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

        sum+=carry;
        carry=sum/10;

        Node* temp=new Node(sum%10);
        ansTail->next=temp;

        ansTail=ansTail->next;
    }
    return ansHead->next;
}


int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* node=new Node(2);
    Node* head1=node;
    Node* tail1=node;
    insertAtTail(tail1,4);
    insertAtTail(tail1,3);
    Node* node2=new Node(5);

    Node* head2=node2;
    Node* tail2=node2;
    insertAtTail(tail2,6);
    insertAtTail(tail2,4);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* ans=addTwoNumbers(head1,head2);

    cout<<endl<<endl;
    print(ans);

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
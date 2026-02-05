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


void insertTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;

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

// [1,3,2,4]


Node* oddEven(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* temp=head;


    Node* oddHead=NULL;
    Node* oddTail=NULL;

    Node* evenHead=NULL;
    Node* evenTail=NULL;
    int cnt=1;
    while(temp!=NULL)
    {
        //for even case

        if(cnt%2==0)
        {
            Node* newNode=new Node(temp->data);
            temp=temp->next;
            if(evenHead==NULL)
            {
                evenHead=newNode;
                evenTail=newNode;
            }
            else
            {
                evenTail->next=newNode;
                evenTail=evenTail->next;
            }
        }
        else
        {
            Node* newNode=new Node(temp->data);
            temp=temp->next;
            
            if(oddHead==NULL)
            {
                oddHead=newNode;
                oddTail=newNode;
            }
            else
            {
                oddTail->next=newNode;
                if(oddTail->next!=NULL)
                {
                oddTail=oddTail->next;

                }
            }

        }
        cnt++;
    }
    oddTail->next=evenHead;
    return oddHead;
}

int main()
{
    Node* head=new Node(1);
    Node* tail=head;
    cout<<endl<<endl;
    cout<<endl<<endl;
    insertTail(tail,2);
    insertTail(tail,3);
    insertTail(tail,4);
    insertTail(tail,5);

    cout<<endl<<endl;
    // cout<<"HEAD :- ";
    print(head);

    cout<<endl<<endl;
    Node* ans=oddEven(head);
    cout<<endl<<endl;
    cout<<"ANS :- ";

    print(ans);
    cout<<endl<<endl;

    return 0;
}
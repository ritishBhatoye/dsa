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

int count(Node* &head,int k)
{
    Node* temp=head;
    int cnt=0;
    int ans=0;
    while(temp!=NULL)
    {
        if(temp->data==k)
        {
            ans++;
        }

        temp=temp->next;
        cnt++;
    }

    return ans;
}

Node* sort012(Node* &head)
{
    

    int cnt0=count(head,0);
    
    int cnt1=count(head,1);
    
    int cnt2=count(head,2);

    Node* dummy=new Node(-1);
    Node* ans=dummy;


    while(cnt0!=0)
    {
        Node* temp=new Node(0);
        
        ans->next=temp;
        ans=temp;

        cnt0--;
    }

    while(cnt1!=0)
    {
        Node* temp=new Node(1);
        
        ans->next=temp;
        ans=temp;

        cnt1--;
    }
    while(cnt2!=0)
    {
        Node* temp=new Node(2);
        
        ans->next=temp;
        ans=temp;

        cnt2--;
    }

    return dummy->next;
    
}
   


int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* node=new Node(1);
    Node* head=node;
    Node* tail=node;
    insertAtTail(tail,0);
    insertAtTail(tail,2);
    insertAtTail(tail,0);
    insertAtTail(tail,1);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* ans=sort012(head);
    cout<<"After sorting LL :- "<<endl;
    print(ans);
    cout<<endl<<endl;


    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
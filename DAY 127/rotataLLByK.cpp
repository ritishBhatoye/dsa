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

void insertAtHead(Node* &head,int k)
{
    Node* temp=new Node(k);
    
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int k)
{
    Node* temp=new Node(k);

    tail->next=temp;
    tail=temp;

}

void insertAtK(Node* &head,int data,int k)
{
    if(k==0)
    {
        insertAtHead(head,data);
    }
    Node* temp=new Node(data);
    Node* itr=head;
    int cnt=1;

    while(cnt<k-1)
    {
        itr=itr->next;
        cnt++;
    }

    temp->next=itr->next;
    itr->next=temp;

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

void deleteAtHead(Node* &head)
{
    Node* temp=head;

    head=head->next;

    temp->next=NULL;
    delete temp;
}

void deleteAtTail(Node*&head,Node* &tail)
{
    Node* itr=head;

    while(itr->next!=tail)
    {
        itr=itr->next;
    }

    Node* nodeToDelete=tail;

    tail=itr;
    tail->next=NULL;
    delete nodeToDelete;
}


void deleteAtK(Node* &head,int k)
{
    Node* temp=head;

    int cnt=1;

    while(cnt<k-2)
    {  
        temp=temp->next;
        cnt++;
    }

    Node* nodeToDelete=temp->next;

    temp->next=temp->next->next;

    delete nodeToDelete;

}

Node* reverseLL(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL)
    {
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;

    }

    return prev;

}

Node* lastNode(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        temp=temp->next;
    }
    return temp;
}
int length(Node* &head)
{
    int cnt=0;
    Node* temp=head;

    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
Node* rotateLLByK(Node* &head,int k)
{
    int n=length(head);
    if(k>n)
    {
        k=k%n;
    }

    Node* tempNext=head;
    Node* temp=head;

    int cnt=1;
    
    while(cnt<=n-k-1)
    {
        temp=temp->next;
        cnt++;
    }
    print(temp);
    cout<<endl;
    
    Node* temp2=temp->next;
    Node* temp2Itr=temp->next;
    temp->next=NULL;

    while(temp2Itr->next!=NULL)
    {
        temp2Itr=temp2Itr->next;

    }

    temp2Itr->next=tempNext;

    return temp2;

}
// Node* rotateLLByK(Node* &head,int k)
// {

//     Node* itr=head;
//     int cnt=1;
//     while(cnt!=k)
//     {
//         itr=itr->next;
//         cnt++;
//     }

//     Node* temp=itr->next;;
//     itr->next=NULL;

//     Node* firstOrder=reverseLL(itr);
//     print(firstOrder);
//     Node* secondOrder=reverseLL(temp);
//     print(secondOrder);
//     // secondOrder->next=NULL;
//     Node* tail=lastNode(firstOrder);
//     tail->next=secondOrder;

//     return NULL

// }

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* n=new Node(0);

    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,1);
    insertAtTail(tail,2);
    // insertAtTail(tail,4);
    // insertAtTail(tail,5);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int k;
    cout<<"Enter the rotation number :- ";
    cin>>k;
    Node* ans=rotateLLByK(head,k);
    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;

   
    cout<<endl<<endl;

    cout<<endl<<endl;


}
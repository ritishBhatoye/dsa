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

Node* findMid(Node* &head)
{
    Node* slow=head;
    Node* fast=head->next; //here we need the firstMid so that's y i set it as

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        
        fast=fast->next->next;
    }
  return head;
}
Node* mergeSort(Node* &l1,Node* &l2)
{
    Node* dummy=new Node(-1);
    
    Node* temp=dummy;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data < l2->data)
        {
            temp->next=l1;
            temp=l1;
            l1=l1->next;
        }
        else
        {
            temp->next=l2;
            temp=l2;
            l2=l2->next;
        }
    }

    if(l1)
    {
        temp->next=l1;
    }
    else
    {
        temp->next=l2;
    }

return dummy->next;
}

Node* sortLL(Node* &head)
{
    if(!head || !head->next) return head;

    Node* mid=findMid(head);

    Node* right = mid->next;
    mid->next=NULL;
    Node* left = head;

    left=sortLL(left);
    right=sortLL(right);

    return mergeSort(left,right);
}




int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* node=new Node(30);
    Node* head=node;
    Node* tail=node;
    insertAtTail(tail,20);
    insertAtTail(tail,10);
    insertAtTail(tail,4);
    insertAtTail(tail,6);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* ans=sortLL(head);
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
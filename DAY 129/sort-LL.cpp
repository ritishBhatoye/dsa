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



void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

Node* findMidNode(Node* &head)
{
  Node* slow=head;
  Node* fast=head->next;

  while(fast!=NULL && fast->next!=NULL)
  {
    slow=slow->next;
    fast=fast->next;
  }
  return slow;
}

Node* mergeSort(Node* left,Node* right)
{
    Node* dummy=new Node(-1);
    Node* temp=dummy;

    while(left!=NULL && right!=NULL)
    {
        if(left->data < right->data)
        {
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else
        {
            temp->next=right;
            temp=right;
            right=right->next;
        }
        

    }

    if(left)
    {
        temp->next=left;
    }
    else
    {
        temp->next=right;
    }

    return dummy->next;
}

Node* sortLL(Node* &head)
{
    if(!head || !head->next)
    {
        return head;
    }

    Node* mid=findMidNode(head);


    Node* right=mid->next;
    mid->next=NULL;
    Node* left=head;
    left=sortLL(left);
    right=sortLL(right);

    return mergeSort(left,right);

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
    Node* node=new Node(4);
    Node* head=node;
    Node* tail=node;

    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtTail(tail,3);

    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    cout<<"After sorting the LL :- ";
    Node* ans=sortLL(head);
    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
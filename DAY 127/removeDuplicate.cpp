#include<iostream>
#include<unordered_set>

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
    Node* newNode=new Node(data);
    
    tail->next=newNode;
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

Node* removeDupFromUnorted(Node* &head)
{
    Node* curr=head;
    Node* prev=NULL;

    unordered_set<int> vis;

    while(curr!=NULL)
    {
        if(vis.count(curr->data))
        {
            prev->next=curr->next;
            curr=curr->next;
        }
        else
        {
            vis.insert(curr->data);
            prev=curr;
            curr=curr->next;
        }
    }

    return head;

}


Node* removeDupFromTheSorted(Node* &head)
{
    Node* temp=head;

    Node* curr=head;

    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data && curr!=NULL)
        {
            curr->data=curr->next->data;
            curr->next=curr->next->next;
        }
      else{

      
            curr=curr->next;
      }  
    }

    return temp;
}

int main()
{
    Node* node=new Node(10);

    Node* head=node;
    Node* tail=node;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    insertAtTail(tail,20);
    insertAtTail(tail,20);
    insertAtTail(tail,20);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;

    cout<<"After removing the duplicates from the sortted list :- ";

    Node* ans=removeDupFromTheSorted(head);

    // cout<<"After removing the duplicates from the unsorted list :- ";
    // Node* ans=removeDupFromUnorted(head);

  
    cout<<endl<<endl;
    cout<<endl<<endl;

    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;



    return 0;
}
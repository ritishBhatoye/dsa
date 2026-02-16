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


int length(Node* &head)
{
    int cnt=0;
    
    Node* temp=head;

    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }

    return cnt;
}

void deleteNode(Node* &head,int key)
 {
    Node* temp=head;

    Node* prev=NULL;

    while(temp->next->data!=key)
    {
        temp=temp->next;
    }

    Node* nodeToDel = temp->next;

    temp->next=temp->next->next;

    delete nodeToDel;

 }



void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=tail->next;
}

Node* removeDupInSort(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }

    Node* temp=head;

    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            temp->data=temp->next->data;
            temp->next=temp->next->next;
        }
        else
        {
            temp=temp->next;
        }
    }

     return head;
}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* n=new Node(1);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,2);
    insertAtTail(tail,2);
    insertAtTail(tail,2);

    insertAtTail(tail,10);
    insertAtTail(tail,23);
    insertAtTail(tail,21);



    cout<<endl<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    Node* ans=removeDupInSort(head);
    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;
    


    

    return 0;
}
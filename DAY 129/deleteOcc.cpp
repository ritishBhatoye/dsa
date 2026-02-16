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

Node* deleteAllOcc(Node* &head,int k)
{
    Node* temp=head;
    // Node* newHead=temp;
    int n=length(temp);

    while(temp!=NULL)
    {
     

        if(temp==head && temp->data==k)
        {
            Node* del=head;
            head=head->next;
            temp=head;
            delete del;
        }   

        else if(temp->next->data == k )
        {
            Node* del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }

        else
        {
            temp=temp->next;
        }

    }
    return head;
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
    cout<<endl<<endl;
    Node* n=new Node(1);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,3);

    insertAtTail(tail,10);
    insertAtTail(tail,23);
    insertAtTail(tail,2);



    cout<<endl<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    Node* ans=deleteAllOcc(head,2);
    print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;
    


    

    return 0;
}
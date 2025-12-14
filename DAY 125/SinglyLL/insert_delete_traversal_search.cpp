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

void insertAtHead(Node* &head,int data)
{
    Node* nodeToInsert=new Node(data);

    nodeToInsert->next=head;
    head=nodeToInsert;
}
void insertAtTail(Node* &tail,int data)
{

    Node* nodeInsert=new Node(data);

    tail->next=nodeInsert;
    tail=nodeInsert;
}

void insertAtK(Node* &head,int data,int k)
{
    Node* temp=head;
    Node* nodeInsert=new Node(data);
    int cnt=1;

    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }

    nodeInsert->next=temp->next;
    temp->next=nodeInsert;
}

// Delete
void deleteAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    
    delete temp;
}

void deleteAtTail(Node*&head,Node* &tail)
{
    Node* temp=head;
    while(temp->next!=temp)
    {
        temp=temp->next;
    }
    tail=temp;

    temp=temp->next;
    delete temp;
}

void deleteAtK(Node* head,int k)
{
    Node* temp=head;

    int cnt=1;

    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }
    
    Node* nodeToDelete=temp->next;

    temp->next=temp->next->next;
    nodeToDelete->next=NULL;

    delete nodeToDelete;


}   

bool searchNode(Node* head,int k)
{
    Node* temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data==k)
        {
            return true; 
            break;
        }
    }
    return false;
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

int main()
{
    cout<<endl<<endl;
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    print(head);

    cout<<endl<<endl;
    cout<<endl<<endl;
    
    cout<<"Enter data for the Node you want to insert :- ";
    int data;
    cin>>data;
    cout<<"Enter the position :- ";
    int k;
    cin>>k;
    insertAtK(head,data,k);
    print(head);

    cout<<endl<<endl;
    deleteAtHead(head);
    cout<<"After deleting from the head :- ";
    print(head);
     
    cout<<endl<<endl;
    deleteAtTail(head,tail);
    cout<<"After deleting fromthe tail :- ";
    print(head);
    cout<<endl<<endl;
    cout<<"Enter the position for that you want to delete :- ";
    int pos;
    cin>>pos;
    deleteAtK(head,pos);
    cout<<"Deleting Node after from the K position :- ";
    print(head);
    cout<<endl<<endl;
    int ele;
    cout<<"Enter the element you want to search in the LL :- ";
    cin>>ele;
    if(searchNode(head,ele))
    {
        cout<<"Node "<<ele<<" is present in the LL"<<endl;
    }
    else
    {
        cout<<"Node "<<ele<<" is NOT present in the LL "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
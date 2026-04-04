#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head,int data)
{
    Node* temp = new Node(data);

    temp->next = head;
    head = temp;

}

void insertAtTail(Node* &tail,int data)
{
    Node* temp = new Node(data);

    tail->next = temp;
    tail = tail->next;

}

int length(Node* head)
{
    int cnt = 0;

    while(head!=NULL)
    {
        head=head->next;
        cnt++;
    }
    return cnt;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

}



Node* removeKElements(Node* head,int k)
{
    Node* temp = head;
    Node* dummy = new Node(-1);
    Node* ans = dummy;
    
    while(temp!=NULL)
    {
        if(temp->data == k)
        {
            temp=temp->next;
        }
        else
        {
            Node* newNode = new Node(temp->data);
            ans->next = newNode;
            ans = ans->next;
            temp = temp->next;
        }
    }
    return dummy->next;
}

int main()
{
    // 1,2,6,3,4,5,6
    Node* node = new Node(1);
    Node* head = node;
    Node* tail = node;
    cout<<endl<<endl;
    insertAtTail(tail,2);
    insertAtTail(tail,6);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    cout<<"Printing Linked List Nodes :- ";
    print(head);
    cout<<endl<<endl;
    int k;
    cout<<"Enter the Element which you want to delete :- ";
    cin>>k;
    Node* ans = removeKElements(head,k);
    cout<<"Printing the list after deletion :- ";
    print(ans);
    
    cout<<endl<<endl;


    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}

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

void insertAtHead(Node* &head,int k)
{
  Node* newNode = new Node(k);

  newNode->next = head;

   head = newNode;

}

void print(Node* head)
{
    Node* temp = head;

    while(temp->next!=NULL)
    {
        cout<<temp->data <<" ";
        temp=temp->next;
    }
}
void insertAtTail(Node* &tail,int k)
{
    Node* newNode = new Node(k);

    tail->next = newNode;
    tail = tail->next;

}

void deleteNode(Node* head,int k)
{
    Node* temp = head;


    while(temp->next!=NULL)
    {
        if(temp->data==k)
        {
          break;   
        }
        temp=temp->next;
    }

    temp->data = temp->next->data;
    temp->next =  temp->next->next;

}
bool searchNode(Node* &head,int k)
{
    Node* temp = head;

    while(temp->next!=NULL)
    {
        if(temp->data == k)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int length(Node* head)
{
    int ans = 0;

    while(head->next!=NULL)
    {
        ans++;  
        head=head->next;  
    }
    return ans;
}
int main()
{
    Node* node = new Node(10);

    Node* head = node;
    Node* tail = node;

    cout<<endl<<endl;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    print(head);
    cout<<endl<<endl;
    
    insertAtTail(tail,60);
    insertAtTail(tail,70);
    insertAtTail(tail,80);
    insertAtTail(tail,100);
    print(head);

    cout<<endl<<endl;
    deleteNode(head,50);
    cout<<"After deletion at 5 :- "<<endl;
    cout<<endl<<endl;
    print(head);
    cout<<endl<<endl;
    if(searchNode(head,10))
    {
        cout<<"Element 10 is PRESENT in the LL "<<endl;
    }
    else
    {
        cout<<"Element 10 is NOT PRESENT in the LL"<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    int lenAns = length(head);
    cout<<"Length :- "<<lenAns<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}
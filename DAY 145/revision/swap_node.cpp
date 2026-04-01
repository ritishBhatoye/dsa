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



Node* deleteAtK(Node* &head,int k)
{
    int n=length(head);
    if(k==-1 || k>n)
    {
        return head;
    }

    if(k==0)
    {
        Node* delNode = head;
        head = head->next;
        delNode->next = NULL;
        delete delNode;

        return head;
    }

    int cnt=0;
    Node* temp = head;
    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }

    Node* delNode = temp->next;

    if(temp->next==NULL)
    {
    temp->next = NULL;
    }
    else
    {


    temp->next = temp->next->next;

    delNode->next = NULL;

    delete delNode;
    }
    return head;

}

Node* swapNodes(Node* &head)
{
    Node* prev =  NULL;
    Node* curr =  head;

    head = head->next;

    while(curr!=NULL && curr->next!=NULL)
    {
        Node* nextNode = curr->next;
        Node* nextPair = curr->next->next;

        nextNode->next = curr;
        curr->next = nextPair;

        if(prev!=NULL)
        {
            prev->next = nextNode;
        }

        prev= curr;
        curr= curr->next;

    }

    return head;
}


int main()
{
    Node* node = new Node(1);
    Node* head = node;
    Node* tail = node;
    cout<<endl<<endl;
    insertAtHead(head,2);
    insertAtTail(tail,10);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,70);
    cout<<"Printing Linked List Nodes :- ";
    print(head);
    cout<<endl<<endl;
    cout<<"Enter the node to search :- ";
    int k;
    cin>>k;
    // if(searchNode(head,k))
    // {
    //     cout<<"Node "<<k<<" is present in the LL"<<endl;
    // }
    // else
    // {
    //     cout<<"Node "<<k<<" is NOT present in the LL"<<endl;
    // }
    cout<<endl<<endl;
    cout<<"Length of the LL :- "<<length(head)<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;

    cout<<"After Swapping :- "<<endl;
    Node* ans = swapNodes(head);
    cout<<endl<<endl;

    print(ans);
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}

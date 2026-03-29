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
//5. Insert At Tail
void addAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);

    tail->next = temp;
    tail=tail->next;
}
//4.Insert At Head
void addAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

void addAtK(Node* &head,int d,int k)
{
    Node* temp = new Node(d);

    int cnt=0;

    Node* itr = head; 
    
    while(cnt!=k-1)
    {
        itr = itr->next;
        cnt++;
    }

    Node* save = itr->next;
    itr->next = temp;
    temp->next = save;


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
//2.find the length of LL
int length(Node* head)
{
    if(head == NULL)
        return 0;

    int cnt=1;
    while(head->next!=NULL)
    {
        head=head->next;
        cnt++;
    }
    return cnt;
}

// merge two sort LL

Node* mergeTwoSortedLL(Node* h1,Node* h2)
{

    if(h1==NULL && h2==NULL)
        return NULL;
    if(h1!=NULL && h2==NULL)
        return h1;
    if(h1==NULL && h2!=NULL)
        return h2;

    Node* dummy = new Node(-1);
    
    Node* head = dummy;
    Node* tail = dummy;

    while(h1!=NULL && h2!=NULL)
    {
        if(h1->data < h2->data)
        {
            Node* newNode = new Node(h1->data);
            h1=h1->next;
            tail->next = newNode;
            tail = tail->next;

            
        }
        else if(h2->data < h1->data)
        {
            Node* newNode = new Node(h2->data);
            h2=h2->next;

            tail->next = newNode;
            tail = tail->next;
        }
        else
        {
            Node* newNode = new Node(h1->data);
            h1=h1->next;
            h2=h2->next;
            tail->next = newNode;
            tail = tail->next;

        }
    }

    while(h1!=NULL)
    {
        if(h1->data)
        {
            Node* newNode = new Node(h1->data);
            h1=h1->next;
            tail->next = newNode;
            tail = tail->next;

            
        }
    }
    while(h2!=NULL)
    {
        if(h2->data)
        {
            Node* newNode = new Node(h2->data);
            h2=h2->next;
            tail->next = newNode;
            tail = tail->next;

            
        }
    }

    return dummy->next;
}

int main()
{
//     l1 = 1 → 1 → 1 → 100 → 200
// l2 = 1 → 2 → 2 → 2 → 300 → 400 → 500
    Node* n = new Node(1);
    Node* head1 = n;
    Node* tail1 =  n;
    cout<<endl<<endl;
    addAtTail(tail1,1);
    addAtTail(tail1,1);
    addAtTail(tail1,100);
    addAtTail(tail1,200);

    // addAtTail(tail,50);
    // addAtTail(tail,60);
    print(head1);
    cout<<endl<<endl;
    Node* m = new Node(1);
    Node* head2 = m;
    Node* tail2 =  m;
    cout<<endl<<endl;
    addAtTail(tail2,2);
    addAtTail(tail2,2);
    addAtTail(tail2,2);
    addAtTail(tail2,300);
    addAtTail(tail2,400);
    addAtTail(tail2,500);


    // addAtTail(tail,50);
    // addAtTail(tail,60);
    print(head2);
    cout<<endl<<endl;
    Node* h1 =  NULL;
    Node* h2 = new Node(0);  
    Node* mergeAns =  mergeTwoSortedLL(head1,head2);
    cout<<"After the merge :- ";
    print(mergeAns);
    // int k;
    // cout<<"Search Element :- ";
    // cin>>k;
    // if(search(head,k))
    // {
    //     cout<<"Element "<<k<<" is presnet "<<endl;
    // }
    // else
    // {
    //     cout<<"Element "<<k<<" is not PRESENT "<<endl;
    // }
    // cout<<endl<<endl;
    // cout<<"Enter the position for which you want to delete the node :- ";
    // int d;
    // cin>>d;
    // deleteNode(head,d);
    // print(head);
    cout<<endl<<endl;
    // Node* reverse =  reverseLL(head);
    // print(reverse);
    cout<<endl<<endl;
    // cout<<"Swapping Nodes :- "<<endl;
    // swapNodes(head);
    // print(head);
    // cout<<endl<<endl;
    // int d;
    // cout<<"Enter the position for Node :- ";

    // cin>>d;
    // removeKNode(head,d);
    // print(head);
    cout<<endl<<endl;


    
    return 0;
}
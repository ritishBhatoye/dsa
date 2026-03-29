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

// 3. search element LL
bool search(Node* head,int k)
{
    while(head->next!=NULL)
    {
        if(k==head->data)
        {
            return true;
            break;
        }
        head=head->next;
    }
    return false;
}
//6.Deletion of the Node
void deleteNode(Node* &head,int k)
{
    if(k==1)
    {
        Node* nodeToDel = head;
        head=head->next;
        delete nodeToDel;

        return ;
    }

    Node* temp = head;
    int cnt=0;
    while(cnt!=k-2)
    {
        temp=temp->next;
        cnt++;
    }

    Node* nodeToDel = temp->next;


    temp->next = temp->next->next;

    delete nodeToDel;
}
// reverse LL
Node* reverseLL(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* temp = NULL;

    while(curr!=NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
    
}

//reverse using the recursion 
Node* reverseRec(Node* head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }

   Node* nextNode = reverseRec(head->next);
   Node* front = head->next;
   front->next = head;
   head->next=NULL;
   return nextNode;
}
//pending 
Node* reverseKNodes(Node* head,int k)
{
    Node* nextPart =  head->next;
    if(k==1)
    {
        nextPart->next;
        return head;
    }

    Node* nextNode = reverseKNodes(head->next,k-1);
    Node* front =  head->next;
    front->next = head;
    head->next = NULL;
    
    return nextNode;
}
// Swapping nodes
void swapNodes(Node* &head)
{
    Node* itr = head;
    if(head==NULL)
    {
        return ;
    }

    // for setting up the newHead
    Node* prev = NULL;
    Node* temp = itr;
    Node* nextNode = itr->next;
    
    temp->next = nextNode->next;


    nextNode->next = temp;
    head = nextNode;
    prev = head->next;
    itr=itr->next;
    
    while(itr != NULL && itr->next != NULL)
    {
        Node* temp = itr;
        Node* nextNode = itr->next;
        
        temp->next = nextNode->next;


        nextNode->next = temp;
        prev->next= nextNode;
        prev=temp;
        
        itr=itr->next;
    }
}
//Remove Node

void removeKNode(Node* head)
{
    if(head==NULL || head->next == NULL)
        return head;

    
    
}

int main()
{
    Node* n = new Node(1);
    Node* head = n;
    Node* tail =  n;
    cout<<endl<<endl;
    addAtTail(tail,2);
    addAtTail(tail,3);
    addAtTail(tail,4);
    // addAtTail(tail,50);
    // addAtTail(tail,60);
    print(head);
    cout<<endl<<endl;
    cout<<"Length :- "<<length(head)<<endl;
    cout<<endl<<endl;
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
    print(head);
    cout<<endl<<endl;
    // Node* reverse =  reverseLL(head);
    // print(reverse);
    cout<<endl<<endl;
    // cout<<"Swapping Nodes :- "<<endl;
    // swapNodes(head);
    // print(head);
    cout<<endl<<endl;
    int d;
    cout<<"Enter the position for Node :- ";

    cin>>d;
    removeKNode(head,d);
    print(head);
    cout<<endl<<endl;


    
    return 0;
}
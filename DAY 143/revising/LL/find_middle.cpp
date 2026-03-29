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

// 12. Detect Loop in Linked List 

bool detectLopp(Node* head)
{
    if(head==NULL || head->next==NULL)
        return false;

    Node* slow = head;
    Node* fast = head;

    while(fast->next!=NULL)
    {
        if(fast->next==slow)
        {
            return true;
            break;
        }

        slow =  slow->next; 
        fast = fast->next;
        if(fast->next!=NULL)
        {
            fast = fast->next;
        }
    }

    return false;

}

Node* findMiddleNode(Node* head)
{
    Node* fast = head;
    Node* slow = head;

    while(fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        if(fast->next!=NULL)
        {
          fast=fast->next;
        }
        
    }
return slow;
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
    addAtTail(tail,5);
    addAtTail(tail,6);

    

    Node* middle = findMiddleNode(head);
    cout<<"Middle :- "<<middle->data<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}
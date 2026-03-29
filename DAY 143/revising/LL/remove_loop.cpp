#include<iostream>
#include<unordered_map>

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

bool detectLoop(Node* head)
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
void removeLoop(Node* head) {
            
    Node* fast = head;
    Node* slow = head;
    
    while(fast->next!=NULL)
    {
        if(fast->next==slow)
        {
            fast->next = NULL;
            break;
        }
        
        slow = slow->next;
        
        fast = fast->next;
        if(fast->next!=NULL)
        {
            fast=fast->next;
        }
    }
    
    
}

//optimal approach 
void removeLoop(Node* head) 
{
    Node* temp = head;
    Node* prev = NULL;
    unordered_map<Node*,int> m;

    while(temp!=NULL)
    {
        if(m.find(temp)!=m.end())
        {
            prev->next->next = NULL;
        }

        m[temp]=cnt;
        cnt++;
        prev=temp;
        temp=temp->next;
    }
}

int main(){

    Node* head = new Node(16);
Node* tail = head;

addAtTail(tail,16);
addAtTail(tail,10);
addAtTail(tail,12);
addAtTail(tail,9);
addAtTail(tail,9);
addAtTail(tail,14);
addAtTail(tail,17);
addAtTail(tail,12);
addAtTail(tail,7);
addAtTail(tail,18);
addAtTail(tail,8);
addAtTail(tail,16);
addAtTail(tail,8);
addAtTail(tail,9);
addAtTail(tail,8);
addAtTail(tail,11);
addAtTail(tail,8);
addAtTail(tail,2);
addAtTail(tail,18);
addAtTail(tail,2);
addAtTail(tail,18);

// create cycle at pos = 6 (0-based index)
Node* temp = head;
Node* joinNode = NULL;
int idx = 0;

while(temp->next != NULL)
{
    if(idx == 6) joinNode = temp;
    temp = temp->next;
    idx++;
}

// connect tail to pos node
temp->next = joinNode;

cout<<endl<<endl;
cout<<"Before removing LOOP :- "<<endl;
cout<<endl<<endl;

if(detectLoop(head))
{
    cout<<"Loop detected "<<endl;
}
else
{
    cout<<"Loop IS NOT detected "<<endl;

}

removeLoop(head);
cout<<"After removing LOOP :- "<<endl;
if(detectLoop(head))
{
    cout<<"Loop detected "<<endl;
}
else
{
    cout<<"Loop IS NOT detected "<<endl;

}

cout<<endl<<endl;
cout<<endl<<endl;
cout<<endl<<endl;
cout<<endl<<endl;


return 0;
}
#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}

bool detectLoop(Node* &head)
{

map<Node* ,bool> vis;

if(head==NULL){

    return false;
}

Node* temp=head;

while(temp!=NULL){
    if(vis[temp]==true){
        cout<<"Present on element "<<temp->data<<endl;
        return true;
    }
    vis[temp]=true;
    temp=temp->next;
}
return false;
}
Node* flyodDetect(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            cout<<"Present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node* startingNode(Node* &head){
    if(head==NULL){
        return NULL;
    }

    Node* intersection=flyodDetect(head);
    Node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head==NULL)
    {
        return ;
    }

    Node* startOfLoop=startingNode(head);
    Node* temp=startOfLoop;

    while(temp->next!=startOfLoop){
    temp=temp->next;
    }

    temp->next=NULL;
}
int main()
{
    cout<<endl<<endl;
    Node* n=new Node(12);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,15);
    insertAtTail(tail,10);
    insertAtTail(tail,11);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    cout<<endl;
    print(head);
    if(detectLoop(head)){
        cout<<"YES LOOP EXIST "<<endl;
    }
    else
    {
        cout<<"NO LOOP EXIST "<<endl;
    }
     cout<<endl<<endl;
    if(flyodDetect(head)!=NULL)
    {
        cout<<"CYCLE IS PRESENT "<<endl;
    }
    else
    {
        cout<<"CYCLE IS NOT PRESENT "<<endl;
    }
    cout<<endl<<endl;
    
    return 0;
}
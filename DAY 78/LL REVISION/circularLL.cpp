#include<iostream>
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
        if(this->next!= NULL){
            delete next;
            next=NULL; 
        }
    }
};

void InsertNode(Node* &tail,int ele,int d)
{
    //empty list
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp; 
    }
    else{

        //non-empty list
        Node* curr=tail;
        while(curr->data!=ele)
        {
            curr=curr->next;
        } 
         
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }

}
void delNode(Node* &tail,int pos)
{
Node* curr=tail;
Node* prev=NULL;

int cnt=0;

while(cnt<pos-1){
    cnt++;
    prev=curr;
    curr=curr->next;
}

prev->next=curr->next;

curr->next=NULL;

delete curr;

}

void delSpecificNode(Node* &tail,int data){
    Node* curr=tail;
    Node* prev=NULL;

    do{
        if(curr->data==tail->data)
        {

        }
        prev=curr;
        curr=curr->next;
    }

    while(tail!=curr);
    
}
void print(Node* &tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);

    cout<<endl;
}
int main()
{
    cout<<endl<<endl;
    Node* tail=NULL;
   cout<<endl<<endl;
    
    /// 5 IS ELEMENT WHICH IS RANDOM
    InsertNode(tail,5,3);
    print(tail);
    InsertNode(tail,3,10);
    print(tail);
    InsertNode(tail,10,20);
    print(tail);
    InsertNode(tail,20,30);
    print(tail);
    InsertNode(tail,30,40);
    print(tail);
    InsertNode(tail,40,50);
    print(tail);
    delNode(tail,2);
    print(tail);

   cout<<endl<<endl;
    return 0;
}
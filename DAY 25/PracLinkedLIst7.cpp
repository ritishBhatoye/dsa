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
        int value=this->data;
        //MEMORY FREE
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"MEMORY IS FREE FOR NODE WITH DATA "<<value<<endl;
    }
};

void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
int input(){
    int data;
   cout<<"ENTER THE DATA FOR NODE : ";
    cin>>data;
    return data;
}
void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    // int d=input();
    Node* n1=new Node(input());
    Node* head=n1;
    Node* tail=n1;
 
    print(head);
    InsertAtTail(tail,input());
    print(head);
     InsertAtTail(tail,input());
    print(head);
     InsertAtTail(tail,input());
    print(head);
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
    deleteNode(1,head);
    print(head);

    return 0;
}

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

void delNode(Node* &head,int pos){
    Node* curr=head;
    Node* prev=NULL;

    int cnt=1;
    while(cnt<pos)
    {
        cnt++;
        prev=curr;
        curr=curr->next;
    }
    
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}
Node* findMid(Node* head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* merge(Node* left,Node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL)
    {
        return left;
    }
    //dummy NODE;
    Node* ans=new Node(-1);
    Node* temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else
        {
          temp->next=right;
          temp=right;
          right=right->next;

        }
    }
    while(left!=NULL){
            temp->next=left;
            temp=left;
            left=left->next;
    }
    while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
    }

    ans=ans->next;
    return ans;
}
Node* mergeSort(Node* head)
{
   if(head==NULL || head->next==NULL){
    return head;
   }

   Node* mid=findMid(head);
   Node* left=mid;
   Node* right=mid->next;
   mid->next=NULL;

   //recursive call

   left=mergeSort(left);
   right=mergeSort(right);

   Node* result=merge(left,right);
   return result;
}
int main()
{
    cout<<endl<<endl;
    Node* n=new Node(50);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,1);
    insertAtTail(tail,3);
    insertAtTail(tail,40);
    insertAtTail(tail,5);
    insertAtTail(tail,10);
    cout<<endl;
    print(head);
    Node* ans=mergeSort(head);
    print(ans);
    cout<<endl<<endl;
    
    return 0;
}
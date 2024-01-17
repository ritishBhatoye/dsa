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
};

void insertAtTail(Node* &tail,int data)
{

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

Node* midNode(Node* &head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}
Node* merge(Node* left,Node* right)
{
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }

    Node* ans=new Node(-1);

    Node* temp=ans;

    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
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
Node* mergeSortLL(Node* &head)
{

   if(head==NULL || head->next==NULL){
    return head;
   }
  Node* left=head;
  Node* mid=midNode(head);

  Node* right=mid->next;

  mid->next=NULL;
  
  left=mergeSortLL(left);
  right=mergeSortLL(right);

  Node* result=merge(left,right);
  return result;

}


int main(){
    Node* n=new Node(3);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    insertAtTail(tail,20);
    insertAtTail(tail,1);    
    insertAtTail(tail,10);    
    insertAtTail(tail,15);
    insertAtTail(tail,5);
    insertAtTail(tail,4);
    insertAtTail(tail,100);



    cout<<endl<<endl;
    print(head); 
    Node* ans=mergeSortLL(head);
    print(ans);


    cout<<endl<<endl;

    return 0;
}
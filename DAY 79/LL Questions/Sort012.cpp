#include<iostream>
using namespace std;

class Node
{public:
 int data;
 Node* next;
 Node(int data){
    this->data=data;
    this->next=NULL;
 }
};

void InsertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    
    tail->next=temp;
    tail=temp;

}

int getLength(Node* &head)
{
    Node* temp=head;

    int cnt=0;

    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

Node* sort012(Node* &head){
    int zeroCount=0;
    int oneCount=0;
    int twoCount=0;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zeroCount++;
        }
        else if(temp->data==1){
            oneCount++;
        }
        else if(temp->data==2)
        {
         twoCount++;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
    return head;
}


void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

    cout<<endl<<endl;
}

int main(){
    Node* n=new Node(1);
    Node* tail=n;
    Node* head=n;
    cout<<endl<<endl;
    InsertAtTail(tail,0);
    print(head);
    InsertAtTail(tail,2);
    print(head);
    InsertAtTail(tail,1);
    print(head);
    InsertAtTail(tail,0);
    print(head);
    InsertAtTail(tail,2); 
    print(head);
    InsertAtTail(tail,1);
    print(head); 

    cout<<endl;
    cout<<"SIZE : "<<getLength(head)<<endl;
    cout<<endl<<endl;
//    Node* ans=reverseLL(head);
  //  cout<<"AFTER REVERSING : "<<endl;
    //print(ans);
    cout<<endl<<endl;
    cout<<"AFTER SORTING : "<<endl;
    Node* ans=sort012(head);
    
    print(ans);
    cout<<endl<<endl;

    return 0;
}
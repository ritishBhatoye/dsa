#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"MEMORY IS FREE FOR NODE WITH DATA "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
//assuming that the element is present in the linked list
//EMPTY LIST IF TAIL==NULL
if(tail==NULL){
Node* newNode=new Node(d);
tail=newNode;
newNode->next=newNode;
}
//NON-empty list
//ASSUMING THAT ELEMENT IS PRESENT IN THE LIST
else{
 Node* curr=tail;
 
 while(curr->data!=element){
    curr=curr->next;
 }

 //ELEMENT FOUND
 Node* temp=new Node(d);

 temp->next=curr->next;
 curr->next=temp;

}
}
void print(Node* tail)
{
Node* temp=tail;
do{
    cout<<tail->data<<" ";
    tail=tail->next;
}while(tail!=temp);
cout<<endl;
}
void deleteNode(Node* &tail,int value){
    //FOR EMPTY LIST
    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    else{
        //NON-EMPTY CASE

    }
}
int main(){
    Node* tail=NULL;
    //Empty list me insert krre hai
    insertNode(tail,5,3);
    // print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,7,8);
    print(tail);
    insertNode(tail,5,10);
    print(tail);
    return 0;
}
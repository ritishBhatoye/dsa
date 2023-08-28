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

void insertAtHead(Node* &head,int d){

}
void insertAtTail(Node)
int main(){
    return 0;
}
#include<iostream>
using namespace std;

class Node
{

    public:
    int data;
    Node * next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

int main()
{
    cout<<endl<<endl;
    Node* n=new Node(10);
    cout<<"DATA :- "<<n->data<<endl;
    cout<<"NEXT :- "<<n->next<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
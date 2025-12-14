#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void inputArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at :- "<<i<<" =  ";
        cin>>arr[i];
    }
}

void printArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertAtHead(Node* &head,int data)
{
    Node* nodeToInsert=new Node(data);

    nodeToInsert->next=head;
    head=nodeToInsert;
}
void insertAtTail(Node* &tail,int data)
{

    Node* nodeInsert=new Node(data);

    tail->next=nodeInsert;
    tail=nodeInsert;
}

Node* arrToLL(int *arr,int n)
{

    Node* node=new Node(arr[0]);
    Node* head=node;
    Node* tail=node;

    for(int i=1;i<n;i++)
    {
        insertAtTail(tail,arr[i]);
    }
return head;

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



int main()
{
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size :- ";
    cin>>size;
    int arr[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    // Node* ans=arrToLL(arr,size);
    // print(ans);

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;    
    cout<<endl<<endl;

    return 0;
}
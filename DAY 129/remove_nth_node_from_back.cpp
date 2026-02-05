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

void insertTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;

    tail=tail->next;

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
int length(Node* &head)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;

    }
    return cnt;
}

void removeNodeFromBack(Node* &head,int p)
{
    if(head==NULL || head->next==NULL)
    {
        return ;
    }

    int n = length(head);
    int k=n-p+1;
    int cnt=0;

    Node* temp=head;

    if(k==1)
    {
        Node* nodeToDelete=head;

        head=head->next;

        nodeToDelete->next=NULL;

        delete nodeToDelete;
    }

    else
    {
    while(cnt!=k-2)
    {
        temp=temp->next;
        cnt++;
    }

    Node* nodeToDel=temp->next;

    temp->next=temp->next->next;

    delete nodeToDel;
}
}
//Input  :- 1,2,3,4,5
//Output :- 1,2,3,5

int main()
{
    cout<<endl<<endl;
    Node* head=new Node(1);
    Node* tail=head;
    insertTail(tail,2);
    insertTail(tail,3);
    insertTail(tail,4);
    insertTail(tail,5);
    int k;
    cout<<"Enter the value for Nth :- ";
    cin>>k;
    removeNodeFromBack(head,k);

    cout<<endl<<endl;
    cout<<"After the deletion :- "<<endl;
    cout<<endl<<endl;
    
    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
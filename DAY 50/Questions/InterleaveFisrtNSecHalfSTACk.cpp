#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void interleaveQueueUsingStack(queue<int> &q){
    stack<int> s;

    int size=q.size()/2;
    //ADDING TO STACK
    for(int i=0;i<size;i++)
    {
        int num=q.front();
        q.pop();
        s.push(num);
    }
    //ADDING TO QUEUE INTO REVERSED FORM
    while(!s.empty()){
     int num=s.top();
     s.pop();
     q.push(num);
    }

    //MOVING FIRST HALF TO END
    for(int i=0;i<size;i++)
    {
    int num=q.front();
    q.pop();
    q.push(num);
    }
    
    //pushing into stack
    for(int i=0;i<size;i++)
    {
        int num=q.front();
        q.pop();
        s.push(num);
    }
    
    //pushing back into QUEUE
    while(!s.empty()){

        int val1=s.top();
        s.pop();
        q.push(val1);

        int val2=q.front();
        q.pop();
        q.push(val2);
    }

}

int main()
{  
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    cout<<endl<<endl;
    interleaveQueueUsingStack(q);
    do{
        cout<<q.front()<<" ";
        q.pop();
    }while(!q.empty());
    cout<<endl<<endl;
    return 0;
}
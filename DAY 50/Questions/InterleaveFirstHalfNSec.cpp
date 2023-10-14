//BRUTE FORCE APPROACH
//USING QUEUE
#include<iostream>
#include<queue>
using namespace std;
void interleaveQueue(queue<int> &q){
    queue<int> temp;
    int size=q.size()/2;

    //adding ELEMENTS TO TEMP QUEUE
    for(int i=0;i<size;i++){
        int num=q.front();
        q.pop();
        temp.push(num);
    }
     
    //REMOVING ELEMENTS FROM TEMP QUEUE IN A WAY :-
    while(!temp.empty()){
        int n1=temp.front();
        temp.pop();
         q.push(n1);
        int n2=q.front();
        q.pop();
       
        q.push(n2);
    }
}
int main()
{   queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    cout<<endl<<endl;

    interleaveQueue(q);
    do{
        cout<<q.front()<<" ";
        q.pop();
    }while(!q.empty());
    cout<<endl<<endl;

    return 0;
}
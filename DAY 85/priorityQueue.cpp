#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(1);
    pq.push(19);
    pq.push(200);
    pq.push(31);

cout<<endl<<endl;
cout<<"ELEMENT AT TOP :- "<<pq.top()<<endl;
cout<<endl<<endl;
cout<<endl<<endl;

cout<<endl<<endl;

    
    return 0;
}
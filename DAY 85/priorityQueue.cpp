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
// cout<<"ELEMENT AT TOP :- "<<pq.top()<<endl;
cout<<endl<<endl;

priority_queue<int,vector<int> ,greater<int> > minHeap;
minHeap.push(4);
minHeap.push(2);
minHeap.push(5);
minHeap.push(3);
 cout<<"ELEMENT AT TOP :- "<<minHeap.top();

cout<<endl<<endl;

cout<<endl<<endl;

    
    return 0;
}
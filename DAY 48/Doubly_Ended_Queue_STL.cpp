#include<iostream>
#include<queue>
using namespace std;
int main(){

    deque<int> d;
    d.push_front(12);
    d.push_back(20);
    cout<<endl<<endl;
    cout<<"FRONT : "<<d.front()<<endl;
    cout<<"REAR  : "<<d.back()<<endl;
    cout<<endl;
    d.pop_front();
    d.pop_front();
    cout<<endl;
    if(d.empty()){
        cout<<"QUEUE IS EMPTY "<<endl;
    }
    else{
        cout<<"QUEUE IS NOT EMPTY "<<endl;
    }
    cout<<endl<<endl;


    return 0;
}
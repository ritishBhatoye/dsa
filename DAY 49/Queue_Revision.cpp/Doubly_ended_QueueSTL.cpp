#include<iostream>
#include<queue>

using namespace std;

int main()
{
    deque<int> d;

    d.push_front(10);
    d.push_front(20);
    cout<<"FRONT : "<<d.front()<<endl;
    cout<<"REAR  : "<<d.back()<<endl;


    return 0;
}
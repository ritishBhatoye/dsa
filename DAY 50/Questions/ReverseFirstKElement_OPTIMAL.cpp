#include<iostream>
#include<queue>

using namespace std;

void remaining(deque<int> &q,int count,int k)
{
    int t=(q.size()-1)-k;
if(count==t)
{
    return ;
}
int num =q.front();
q.pop_front();

remaining(q,count+1,k);
q.push_back(num);
}

void solve(deque<int> &q,int count,int k){
    if(count==k){
        return ;
    int num=q.front();
    q.pop_front();

    solve(q,count+1,k);

    q.push_back(num);
}
}

// void reverseFirstKElement(deque<int> &q,int count,int k){
// solve(q,count,k);
// remaining(q,count,k);
// }

int main(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    cout<<endl<<endl;
    solve(d,0,3);
    remaining(d,0,3);
    do
    {
        cout<<d.front()<<" ";
        d.pop_front();
    }while(!d.empty());
    cout<<endl<<endl;
    


    return 0;
}
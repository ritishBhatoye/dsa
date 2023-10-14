//BRUTE FORCE APPROACH
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseFirstKElement(queue<int> &q,int k){
stack<int> st;
///REMOVING FROM QUEUE AND ADDINT TO STACK
for(int i=0;i<k;i++){
int num =q.front();
q.pop();
st.push(num);

}
//REMOVING FROM STACK AND ADDING TO QUEUE
while(!st.empty()){
    int num=st.top();
    st.pop();
    q.push(num);
}

int t=q.size()-k;
//REMOVING n-k ELEMENTS FROM QUEUE
for(int i=0;i<t;i++){
    int num=q.front();
    q.pop();
    q.push(num);
} 

}

int main()
{
    queue<int> d;
    d.push(10);
    d.push(20);
    d.push(30);
    d.push(40);
    d.push(50);
    cout<<endl<<endl;
    reverseFirstKElement(d,3);
    do
    {
        cout<<d.front()<<" ";
        d.pop();
    }while(!d.empty());
    cout<<endl<<endl;
    

    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

void deleteMidElementFromSt(stack<int> &s,int count,int size){
    //base case
    if(count==(size/2)){
        s.pop();
        return ;
    }

    int num=s.top();
    s.pop();

    //recursive call
    deleteMidElementFromSt(s,count+1,size);
    
    //pushing the stored element while going back 
    s.push(num);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    deleteMidElementFromSt(s,0,s.size());
    cout<<endl<<endl;
    do{
        cout<<s.top()<<" ";
        s.pop();
    }while(!s.empty());
    cout<<endl<<endl;

    return 0;
}

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    //PUSHING/ADDING ELEMENT IN A STACK  
    cout<<endl<<endl;
    s.push(10);
    s.push(2);
    s.push(5);
    s.push(20);
    cout<<"TOP/PEAK ELEMENT "<<s.top()<<endl;
    //deleting an ELEMENT 
    cout<<"TOP/PEAK ELEMENT "<<s.top()<<endl;
    if(s.empty()){
        cout<<"STACK IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK IS NOT EMPTY "<<endl;
    }
    cout<<"SIZE OF STACK "<<s.size()<<endl;
    //printing STACK's ELEMENT
    //  for(int i=0;i<s.size();i++){
    //      cout<<s.top()<<" ";
    //      s.pop();
    //  }
    cout<<endl<<endl;
    return 0;
}
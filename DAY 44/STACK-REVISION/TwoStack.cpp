#include<iostream>

using namespace std;

class TwoStack{
    public:
    int size;
    int top1,top2;
    int *arr;

    TwoStack(int size){
    this->size=size;
    top1=-1;
    top2=size;
    arr=new int[size];
    }
   //push 1 OPERATION 
   void push1(int element){
    if(top2-top1>1){
        top1++;
    arr[top1]=element;
    }
    else{
        cout<<"STACK OVERFLOW "<<endl;
    }
   }
   //push 2 operation
   void push2(int element)
   {
  if(top2-top1 > 1)
  { 
     top2--;
    arr[top2]=element;
  }
  else
  {
cout<<"STACK OVERFLOW "<<endl;
  }
   }
   //POP OPERATION
   void pop1(){
    if(top1>=1)
    {
       top1--;
    }
    else{
        cout<<"STACK UNDERFLOW "<<endl;
    }
   }

   void pop2(){
    if(top2<size){
        top2++;
    }
    else{
        cout<<"STACK UNDERFLOW "<<endl;
    }
   }
   int peak1(){
    if(top1>=1){
        return arr[top1];
    }
    else{
        return -1;
        cout<<"STACK IS EMPTY "<<endl;
    }
   }
   int peak2(){
    if(top2<size){
        return arr[top2];
    }
    else{
        cout<<"STACK IS EMPTY "<<endl;
        return -1;
    }
   }
};

int main(){
    
    TwoStack t(5);
    t.push1(10);
    t.push1(20);
    t.push1(30);
    t.push2(40);
    t.push2(50);
    cout<<endl<<endl;
    cout<<"STACK ONE "<<t.peak1()<<endl;
    cout<<"STACK TWO "<<t.peak2()<<endl;
    cout<<endl<<endl;
    return 0;
}
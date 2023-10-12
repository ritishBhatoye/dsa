#include <iostream>
using namespace std;

class TwoStack
{
    int *arr;
    int size;
    int top1, top2;

public:
    TwoStack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    //PUSH 1 OPERATION
    void push1(int e){
        //AS TOP2==SIZE 
        if(top2-top1>1)
        {
         top1++;
         arr[top1]=e;
        }
        else{
            cout<<"STACK 1 OVERFLOW "<<endl;
        }
    }
    //PUSH 2 OPERATION
    void push2(int e){
        if(top2-top1>1){
            top2--;
            arr[top2]=e;
        }
        else{
            cout<<"STACK 2 OVERFLOW "<<endl;
        }
    }
    //POP 1 OPERATION

   void pop1(){
    if(top1>=0){
        top1--;
    }
    else{
        cout<<"STACK 1 UNDERFLOW "<<endl;
    }
   }

   //POP 2 OPERATION
   void pop2(){
     if(top2<size){
        top2++;
     }
     else{
        cout<<"STACK 2 UNDERFLOW "<<endl;
     }
   }     

  //TOP 1
  int peak1(){
    if(top1>=0){
        return arr[top1];
    }
    else{
        cout<<"STACK 1 IS EMPTY "<<endl;
        return -1;
    }
  }
  int peak2(){
    if(top2<size){
        return arr[top2];
    }
    else
    {
        cout<<"STACK 2 IS EMPTY "<<endl;
        return -1;
    }
  }
  
  //is EMPTY FOR STACK 1
  bool isEmpty1(){
    if(top1==-1){
    return true;
    }
    else{
        return false;
    }
  }
 bool isEmpty2(){
    if(top2==size){
        return true;
    }
    else{
        return false;
    }
 }

 };

int main()
{
cout<<endl<<endl;

    TwoStack t(6);
    t.push1(10);
    t.push1(20);
    t.push1(30);
    t.push2(40);
    t.push2(50);
    t.push2(60);
cout<<endl<<endl;
     
    cout<<"TOP ELEMENT OF STACK 1 :- "<<t.peak1()<<endl;
cout<<endl;

    cout<<"TOP ELEMENT OF STACK 2 :- "<<t.peak2()<<endl;
     
cout<<endl<<endl;
    if(t.isEmpty1()){
        cout<<"STACK 1 IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK 1 IS NOT EMPTY "<<endl;
    }
cout<<endl;
    if(t.isEmpty2()){
        cout<<"STACK 2 IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK 2 IS NOT EMPTY "<<endl;
    }
    cout<<endl;
     cout<<"STACK - 1 "<<endl;
     do{
        cout<<t.peak1()<<" ";
        t.pop1();
     }while(!t.isEmpty1());
cout<<endl<<endl;
     cout<<"STACK - 2 "<<endl;
     do{
        cout<<t.peak2()<<" ";
        t.pop2();
     }while(!t.isEmpty2());
cout<<endl<<endl;
    return 0;
}
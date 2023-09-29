#include<iostream>
using namespace std;
class Stack{
public:
int *arr;
int size;
int top;

Stack(int size){
    this->size=size;
    top=-1;
    arr=new int[size];
}
 void push(int num){
    if(size-top>1){
        top++;
        arr[top]=num;
    }
    else{
        cout<<"STACK OVERFLOW "<<endl;
    }
 }
 void pop(){
   if(top>=0){
       top--;
   }
   else{
     cout<<"STACK UNDERFLOW "<<endl;
   }
 }
 int peakElement(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"STACK IS EMPTY "<<endl;
        return -1;
    }
 }
 bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
 }
void midPop(){
 
        top=(size/2);
           
    
    // else{
    //     top=(size/2);
            
    // }

     pop();
     size--;
     top=size-2;
 }
};
// void midPop(stack<int> &s,int size){
// s.top()=size-(size/2);
// s.pop();
// size--;
// s.top()=size;
// }

int main(){
    Stack s(5);
    s.push(5);
    s.push(2);
    s.push(9);
    s.push(5);
    s.push(3);
    cout<<endl<<endl;

    s.midPop();
    cout<<endl;
    cout<<"NEW SIZE "<<s.size<<endl;
   do
   {
       cout<<s.peakElement()<<" ";
        s.pop();
   } while (!s.isEmpty());
   
    cout<<endl<<endl;
    return 0;
}
// //SORT A STACK
#include<iostream>
#include<stack>
using namespace std;
void insertInSortedWay(stack<int> &s,int x){
    if((s.top()<x)){
s.push(x);
    }
int num=s.top();
//recursive call
insertInSortedWay(s,x);
s.push(num);
}
void sort(stack<int> &s){
if(s.empty()){
    return ;
}
int num=s.top();
s.pop();
//recursive call
sort(s);
insertInSortedWay(s,num);
}
int main(){
    stack<int> s;
    return 0;
}
























// #include <bits/stdc++.h> 

// void insertedStack(stack<int> &s,int num){
// 	if(s.empty() || (!s.empty() && s.top()<num)){
// 		s.push(num);
// 		return ;
// 	}
// 	int x=s.top();
// 	s.pop();

// 	insertedStack(s,num);

// 	s.push(x);
// }
// void sortStack(stack<int> &s)
// {
// 	if(s.empty()){
// 		return;
// 	}

// 	int num=s.top();
// 	s.pop();

// 	//recurssive call;
// 	sortStack(s);

// 	insertedStack(s,num);
// }
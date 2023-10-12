#include<iostream>
#include<stack>
using namespace std;

void input(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        int e;
        cin>>e;
        arr.push_back(e);
    }
}
vector<int> nextSmaller(vector<int> &arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans;
   for(int i=n-1;i>=0;i++){
    int curr=arr[i];
    while(s.top()>=curr){
        s.pop();
    }
    //ans is STACK KA TOP
    ans[i]=s.top();
    s.push(curr);
   }
   return ans;
}

int main()
{  
   cout<<endl<<endl;
   vector<int> arr;
   cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
   int size;
   cout<<endl;
   cin>>size;
   cout<<endl<<endl;
   input(arr,size);
   cout<<endl;
   nextSmaller(arr,size);
   cout<<endl<<endl;

    return 0;
}
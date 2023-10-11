#include<iostream>
#include<stack>
using namespace std;

void Cost(string &s){
    stack<char> st;
    //for ODD CASE
    if((s.length()%2)==1){
        return -1;
    }
    
    //for EVEN CASE
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        //IF OPENING BRACKET THEN PUSH ON STACK 
        if(ch=='{'){
            st.push(ch);
        }
        //for closed braces
        else
        {
         if(!st.empty() && st.top()=='{'){
            st.pop();
         }
         else{
            st.push(ch);
         }
        }
        
    } 
    int a=0,b=0;
       while(!st.empty())
        {
            if(st.top()=='{')
            {
           a++;
            }
        else
            {
            b++;
            }
            s.pop();
        }
        int ans=(a+1)/2 + (b+1)/2;
    return ans;
}

int main(){
    return 0;
}
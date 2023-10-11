#include<iostream>
#include<stack>
using namespace std;

int Cost(string &s){
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
            st.pop();
        }
        int ans=(a+1)/2 + (b+1)/2;
    return ans;
}

int main(){
    string s;
    cout<<endl<<endl;
    cout<<"ENTER THE STRING :- "<<endl;
    cin>>s;
    cout<<endl<<endl;
    cout<<"MINIMUM COST TO MAKE STRING VALID : "<<Cost(s);
    cout<<endl<<endl;
    return 0;
}
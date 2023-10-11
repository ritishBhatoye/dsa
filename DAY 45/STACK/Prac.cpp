//MINIMUN COST TO MAKE STRING VALID
#include<iostream>
#include<stack>
using namespace std;

int Cost(string &s){
    //for ODD NUMBER OF BRACES
    if((s.length()%2)==1){
return -1;
    }

    //for EVEN NUMBER OF BRACES
    stack<char> st;

    for(int i=0;i<s.size();i++)
    {
    char ch=s[i];
    if(ch=='{')
    {
        st.push(ch);
    }
    //for closing bracket
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

    //stack CONTAINING EXPRESSION
    int a=0,b=0;
    while(!st.empty()){
        if(st.top()=='{'){
            a++;
        }
        else{
            b++;
        }
        st.pop();
    }
    int ans=(a+1)/2 + (b+1)/2;
    return ans;
}
int main()
{
    string s;
    cout<<endl<<endl;
    cout<<"ENTER THE STRING FOR GIVING COST OF THE MINIMUM REPLACEMENT : "<<endl;
    cout<<endl;
    cin>>s;
    cout<<endl;
    cout<<"COST : "<<Cost(s)<<endl;
    cout<<endl<<endl;
    return 0;
}
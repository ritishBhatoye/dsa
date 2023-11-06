#include<iostream>
#include<stack>
using namespace std;

int minC(string &s){
    int size=s.size();
if(size%2==1){
    return -1;
}
stack<char> st;
for(int i=0;i<size;i++){
    char ch=s[i];
    if(ch=='{'){
        st.push(ch);
    }
    else
    {
        char top=st.top();
      if(!st.empty() && top=='{'){
         st.pop();
      }
      else{
        st.push(top);
      }

    }
}
int a=0,b=0;
while(!st.empty()){
    if(a=='{'){
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

int main(){
    cout<<endl<<endl;
    string s;
    cin>>s;
    cout<<"MINIMUM COUNT : "<<minC(s)<<endl;
    cout<<endl<<endl;

    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

bool isRedundent(string s){
    
   stack<char> st;
   
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        //for OPENING BRACKET OR OPERATOR
        if((ch=='(')||
           (ch=='+')||
           (ch=='-')||
           (ch=='/')||
           (ch=='*')){
            st.push(ch);
           }
        else{
            //for CLOSING BRACKET or LOWER CASE LETTER
            if(ch==')'){
                bool red=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+'||top=='-'||top=='/'||top=='*'){
                        red=false;
                    }
                    st.pop();
                }
                if(red==true){
                    return true;
                }
                st.pop();
            }
}
    }
return false;    
}
int main()
{
    string s;
    cout<<endl<<endl;
    cout<<"ENTER THE STRING FOR CHECKING WHETHER IT IS CONTAINING REDUNDENT BRACKETS "<<endl;
    cin>>s;
    if(isRedundent(s)){
        cout<<"REDUNDENT "<<endl;
    }
    else{
        cout<<"NOT REDUNDENT "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
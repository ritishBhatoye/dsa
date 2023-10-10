#include <iostream>
#include <stack>
using namespace std;

bool validParentehsis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {   //for opening BRACKETS
        char ans = s[i];
        if ((ans == '(') ||
            (ans == '{') ||
            (ans == '['))
        {
            st.push(ans);
        }
        // for CLOSING BRACKETS
      else{
          if (!st.empty())
        {
            if ((ans == ')' && st.top() == '(') ||
                (ans == '}' && st.top() == '{') ||
                (ans == ']' && st.top() == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
       
    }
     if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
}

int main()
{
    string s;
    cout<<endl<<endl;
    cout<<"ENTER THE STRING FOR WHICH YOU WANT TO CHECK VALIDITY "<<endl;
    cin>>s;
    if(validParentehsis(s)){
        cout<<"STRING IS VALID PARENTHESIS "<<endl;
    }
    else{
        cout<<"STRING IS NOT VALID PARENTHESIS "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
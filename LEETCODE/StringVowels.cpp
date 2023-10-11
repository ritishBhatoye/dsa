#include<iostream>
using namespace std;

int v_count(string &s)
{
    int count=0;
for(int i=0;i<s.size();i++){
    if((s[i]=='a' )|| (s[i]=='o') || (s[i]=='u') || (s[i]=='e') || (s[i]=='i')){
count++;
}
}
return count;
}
 
int main()
{  string s;

   cout<<endl<<endl;
   cout<<"ENTER THE STRING "<<endl;
   getline(cin,s);
//    cin>>s;
   cout<<"TOTAL VOWEL : "<<v_count(s)<<endl;
   cout<<endl<<endl;
    return 0;
}

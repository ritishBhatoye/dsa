#include<iostream>
using namespace std;

void ReverseString(string& str,int s,int e){
    //base case
    if(s>e){
        return ;
    }
    swap(str[s],str[e]);
    
    //recursive call
    ReverseString(str,s+1,e-1);
}

int main(){
    string str;
    cout<<"ENTER THE STRING YOU WANT TO REVERSE "<<endl;
    cin>>str;
    cout<<"REVERSED STRING "<<endl;
    ReverseString(str,0,str.length()-1);
    cout<<str<<endl;
    return 0;
}
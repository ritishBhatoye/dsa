#include<iostream>
using namespace std;

bool CheckIfPalidrome(string& str,int s,int e){
     bool ans;
    //base case
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }  
    else{
        
       return CheckIfPalidrome(str,s+1,e-1);

    }


}
int main(){
   string s;
   cout<<endl<<endl;
   cout<<"ENTER THE STRING "<<endl;
   cin>>s;
   if(CheckIfPalidrome(s,0,s.size()-1)){
    cout<<"STRING IS PALIDROME "<<endl;
   }
   else{
    cout<<"STRING IS NOT PALIDROME "<<endl;
   }
   cout<<endl<<endl;
    return 0;
}
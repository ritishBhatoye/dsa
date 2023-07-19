//MAXIMUM OCCURING CHARACTER IN THE STRING 
#include<iostream>
using namespace std;

char MaxOcc(string s){
   int arr[26]={0};
   //FINDING COUNT
   for(int i=0;i<s.length();i++){
    char ch=s[i];
    int n=0;
    n=ch-'a';
    arr[n]++;
   }
 //FINDING MAXIMUM OCCURING CHARACTER
 int maxi=-1,ans=0;
 for(int i=0;i<26;i++){
    if(maxi<arr[i]){
        ans=i;
        maxi=arr[i];
    }
 }
 char finalAns='a'+ans;
 return finalAns;
}
int main(){
string s;
 cout<<"ENTER THE STRING "<<endl;
    cin>>s;
    cout<<"ENTERRED STRING "<<endl;
    cout<<s<<endl;
cout<<"MAXIMUM OCCURING CHARACTER "<<MaxOcc(s)<<endl;
    return 0;
}
//END
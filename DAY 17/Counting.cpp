#include<iostream>
using namespace std;
int counting(int n){
    if(n==1){
        
       return 1;
       
    }
    else{
      cout<<n<<endl;
      return counting(n-1);
    }
}
int main(){
    int s;
    cout<<"ENTER THE NUMBER "<<endl;
    cin>>s;
    // int e;
    // cin>>e;
    // cout<<"ENTER THE ENDING NUMBER "<<endl;
    cout<<"RESULT :- "<<endl;
    cout<<counting(s)<<endl;
    return 0;
}
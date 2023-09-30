#include<iostream>
using namespace std;

int stair(int n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //recursive call
    int ans=stair(n-1)+stair(n-2);
    return ans;
}

int main(){
    int n;
    cout<<endl<<endl;

    cout<<"ENTER THE STEP NUMBER : "<<endl;
    cin>>n;
    cout<<"TOTAL NUMBER OF WAYS TO REACH "<<n<<" = "<<stair(n)<<endl;
    cout<<endl<<endl;
    return 0;
}
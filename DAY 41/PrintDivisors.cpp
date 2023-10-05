#include<iostream>
using namespace std;

void printDivisors(int n){
for(int i=1;i<=n;i++){
     if(n%i==0)
    {
        cout<<i<<" ";
    }
   }
}

int main()
{   cout<<endl<<endl;
    int n=10;
    printDivisors(n);
   cout<<endl<<endl;

    return 0;
}
















// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> printDivisors(int n) {
//     // Write your code here
//        int i=0;
//     vector<int> ans;
//    while(i<n){
//     if(n%i==0){
//    ans.push_back(i);
//     i++;
//     }
//    else{ 
//        i++;
//        }
// }
// return ans;
// }
// int main(){
//     int n=10;
//     cout<<printDivisors(n)<<endl;
//     return 0;
// }
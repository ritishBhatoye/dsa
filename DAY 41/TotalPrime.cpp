#include<iostream>
using namespace std;
int totalPrint(int s,int e){

    int count=0;
for(int i=s;i<e;i++){
    for(int j=0;j<9;j++){
        if((s%i)!=0){
            count++;
        }
    }
}
return count;
}
int main()
{
    int s=2,e=10;
    cout<<totalPrint(2,10)<<endl;
    return 0;
}
  // int j=1;
//      int  count=0;
//    for(int i=s;i<e;i++){
//     if((i%j)!=0){
//         count++;
//     }
//         j++; 
    
//    }
//    return count;
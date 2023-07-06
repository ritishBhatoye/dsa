//TRIPLET SUM
#include<iostream>
using namespace std;
 void user_input(vector<int> &arr,int size){
     cout<<"ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : "<<endl;
     int a;
     for(int i=0;i<size;i++){
         cin>>a;
         arr.push_back(a);
     }
 }
 void print(vector<int> &arr,int size){
     for(int i=0;i<size;i++){
         cout<<arr[i]<<endl;
     }
 }

 
void pair_Sum(vector<int> &arr,int size,int sum){
vector<int> ans; 
     for(int i=0;i<size;i++){
        for(int k=i+1;k<size;k++){
          for(int j=i+2;j<size;j++)
          {  if((arr[i]+arr[k]+arr[j])==sum){
            //  vector<int> temp;
            // //  temp.push_back(min(arr[i],arr[j]));
            // //  temp.push_back(max(arr[i],arr[j]));
             ans.push_back(arr[i]);
             ans.push_back(arr[k]);
             ans.push_back(arr[j]);
            }}
        }
     }
     int s=ans.size();
     print(ans,s);
 }
using namespace std;
int main(){
    vector<int> a;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(a,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    print(a,size);
    int sum;
    cout<<"ENTER THE SUM "<<endl;
    cin>>sum;
    cout<<"PAIR SUM : "<<endl;
    pair_Sum(a,size,sum);
    return 0;
}
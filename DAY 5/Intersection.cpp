// #include<iostream>
// using namespace std;
// void user_input(vector<int> &arr,int size){
//     cout<<"ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : "<<endl;
//     int a;
//     for(int i=0;i<size;i++){
//         cin>>a;
//         arr.push_back(a);
//     }
// }
// void print(vector<int> &arr,int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }
// void inter(vector<int> arr1,vector<int> arr2){
//     vector<int> ans;
//     int s1=arr1.size();
//     int s2=arr2.size();
//     for(int i=0;i<s1;i++){
//         for(int j=0;j<s2;j++){
//             if(arr1[i]==arr2[j]){
//                ans.push_back(arr1[i]);
//                arr2[j]=INT_MIN;
//                break;
//             }
//         }
//     }
//    int size=ans.size();
//    print(ans,size); 
// }
// int main(){
//    vector<int> a;
//    vector<int> b;
//    cout<<"ENTER THE SIZE OF FIRST ARRAY "<<endl;
//    int s1;
//    cin>>s1;
//    user_input(a,s1);
//    cout<<"ENTERRED ELEMENTS IN FIRST ARRAY : "<<endl;  
//    print(a,s1);
//     cout<<"ENTER THE SIZE OF SECOND ARRAY "<<endl;
//    int s2;
//    cin>>s2;
//    user_input(b,s2);
//    cout<<"ENTERRED ELEMENTS IN SECOND ARRAY : "<<endl;
//    print(b,s2);
//    cout<<"INTERSECTION OF TWO ARRAYS LIST : "<<endl;
//    inter(a,b);  
//     return 0;
// }
//OPTIMIZED SOLUTION 
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
void interSec(vector<int> a,int n,vector<int> b,int m){
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    int size=ans.size();
    print(ans,size);
}
int main(){
    vector<int> a;
    vector<int> b;
    int s1;
    cout<<"ENTER THE SIZE OF FIRST ARRAY : "<<endl;
    cin>>s1;
    user_input(a,s1);
    cout<<"ENTERRED ELEMENTS IN FIRST ARRAY "<<endl;
    print(a,s1);
    int s2;
    cout<<"ENTER THE SIZE OF SECOND ARRAY : "<<endl;
    cin>>s2;
     user_input(b,s2);
    cout<<"ENTERRED ELEMENTS IN SECOND ARRAY "<<endl;
    print(b,s2);
    cout<<"INTERSECTION OF THE TWO ARRAYS "<<endl;
    interSec(a,s1,b,s2);
    return 0;
}
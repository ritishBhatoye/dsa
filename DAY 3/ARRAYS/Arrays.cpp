// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
//     cin>>n;
//     int a[n];
//     cout<<"ENTER THE VALUES OF AN ARRAY"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"ENTERED VALUES OF AN ARRAY  : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }
// //PRINTING THE REVERSE AN ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cout<<
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int getMax(int n[],int size){
    int max=INT_MAX;
for(int i=0;i<size;i++){
    if(n[i]>max){
    max=n[i];
    }
}
return max;
}
int getMin(int n[],int size){
    int min=INT_MIN;
    for(int i=0;i<size;i++){
        if(n[i]<min){
            min=n[i];
        }
    }
    return min;
}
int main(){
 int n;
 cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
 cin>>n;
int a[20];
//int size=sizeof(a)/sizeof(a[0]);
cout<<"ENTER THE VALUES IN ARRAY : "<<endl;
for(int i=0;i<n;i++){
 cin>>a[i];
}
cout<<"ENTERED VALUES IN AN ARRAY : "<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}
cout<<"MAXIMUM VALUE  : "<<getMax(a,n)<<endl;
cout<<"MINIMUM VALUE  : "<<getMin(a,n)<<endl;

    return 0;
}
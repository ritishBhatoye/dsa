///ROTATE ARRAY BY K PLACES
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
void rotateByK(vector<int> &arr,int n,int d){
d=d%n;
vector<int> temp;
for(int i=0;i<d;i++){
temp.push_back(arr[i]);
}
for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
}
print(arr,n);
}
int main(){
   int size;
   vector<int> arr;
   cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
   cin>>size;
   user_input(arr,size);
   cout<<"ENTER THE ELEMENTS YOU WANT TO INSERT : "<<endl;
   print(arr,size);
   int d;
   cout<<"ENTER FOR HOW MANY PLACE YOU WANT TO ROTATE ARRAY : "<<endl;
   cin>>d;
   cout<<"AFTER ROTATING ARRAY "<<endl;
   rotateByK(arr,size,d);
    return 0;

}
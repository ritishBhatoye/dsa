#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
    cout << "ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : " << endl;
    int a;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void RotateAnArray(vector<int> arr,int size){
    vector<int> ans;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

       if(arr[i]!=arr[j] && arr[i]==0){
        swap(arr[j],arr[i]);
       }
       }
        // if(arr[i]==0){
        //     arr[size-i]=arr[i];
        // }
    }
    print(arr,size);
}
int main(){
vector<int> arr;
int size;
cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
cin>>size;
user_input(arr,size);
cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
print(arr,size);
cout<<"MOVING ZERO TO AN END "<<endl;
RotateAnArray(arr,size);
return 0;
}
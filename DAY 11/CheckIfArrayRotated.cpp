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
bool RotateArray(vector<int> &arr,int size){
    int count=0;
    for(int i=1;i<size;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[size-1]>arr[0]){
      count++;
    }
    return count<=1;
}
int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    if(RotateArray(arr,size)){
    cout<<"CHECKING IF ARRAY IS SORTED AND ROTATED : YES "<<endl;
    }
    else{
        cout<<"CHECKING IF ARRAY IS SORTED AND ROTATED : NO "<<endl;
    }
    return 0;
}
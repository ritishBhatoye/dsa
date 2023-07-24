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
void Sort(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    print(arr,size);
}
bool checkIfarr(vector<int>& arr){
    int size=arr.size();
    Sort(arr,size);
    if(arr[size-1==size+1]){
        return true;
    }
    if(arr[size-1]==1){
        return true;
    }
    return false;
}
int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY :- "<<endl;
    print(arr,size);
    // cout<<"AFTER SORTING THE ARRAY "<<endl;
    // Sort(arr,size);
    checkIfarr(arr);
    return 0;
}
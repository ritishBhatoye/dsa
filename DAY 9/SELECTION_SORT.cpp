#include<iostream>
using namespace std;
void user_input(vector<int> &arr, int size)
{
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
void sortArr(vector<int> &arr,int size){
   // int temp=0;
    for(int i=0;i<size;i++){
        
        int minI=i;
        for(int j=i+1;j<size;j++){
            if(arr[minI]>arr[j]){
                minI=j;
            }
        }
        swap(arr[minI],arr[i]);
    }
    print(arr,size);
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE OF AN ARRAY : ";
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    print(arr,size);
    cout<<"SORETED ARRAY IS :- "<<endl;
    sortArr(arr,size);
    return 0;
}
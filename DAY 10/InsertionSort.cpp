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
void InsertionSort(vector<int> &arr,int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    print(arr,size);
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"APPLYING INSERTION SORT "<<endl;
    InsertionSort(arr,size);
    return 0;
}
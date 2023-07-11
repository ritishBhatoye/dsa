//BUBBLE SORT
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
void BubbleSort(vector<int> &arr,int size){
    int temp=0;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[i]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
    }
}
print(arr,size);
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENT IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"SORTED ARRAY IS "<<endl;
    BubbleSort(arr,size);

    return 0;
}
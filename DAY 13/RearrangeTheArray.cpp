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
void Rearrange_arr(vector<int> &arr,int size){
    vector<int> ans(size,0);
    int n=1;
    int p=0;
    for(int i=0;i<size;i++){
       if(arr[i]<0){
        ans[n]=arr[i];
        n+=2;
       }
      else {
        ans[p]=arr[i];
        p+=2;
      }
    }
   // int s=ans.size();
     print(ans,size);
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
    cin>>size;
    vector<int> arr;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY :- "<<endl;
    print(arr,size);
    cout<<"REARRANGING THE ELEMENTS IN AN ARRAY :- "<<endl;
    Rearrange_arr(arr,size);
}

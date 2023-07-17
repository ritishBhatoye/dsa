//REARRANGE THE ELEMENTS IN AN ARRAY IF NUMBER OF POSITIVE ELEMENTS ARE NOT EQUAL TO NEGATIVE ELEMENTS
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
void RearrangeTheElements(vector<int> &arr,int size){
   vector<int> n,p;
   for(int i=0;i<size;i++){
    if(arr[i]<0){
        n.push_back(arr[i]);
    }
    else{
        p.push_back(arr[i]);
    }
   } 
   if(n.size()<p.size()){
    for(int i=0;i<n.size();i++){
        arr[2*i]=p[i];
        arr[2*i+1]=n[i];
    }
    int index=n.size()*2;
    for(int i=n.size();i<p.size();i++){
        arr[index]=p[i];
        index++;
    }
   }
   else{
    for(int i=0;i<p.size();i++){
        arr[2*i]=p[i];
        arr[2*i+1]=n[i];
    }
    int index=p.size()*2;
    for(int i=p.size();i<n.size();i++){
        arr[index]=n[i];
        index++;
    }
   }
   print(arr,size);
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"REARRANGING THE ELEMENTS IN AN ARRAY "<<endl;
    RearrangeTheElements(arr,size);
    return 0;
}
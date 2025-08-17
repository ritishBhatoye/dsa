#include<iostream>
#include <climits>
#include <utility>

using namespace std;

void input_vector(vector<int>& arr)
{
    cout<<endl;
    
    for(int i=0;i<arr.size();i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
}

void print_vector(vector<int>& arr)
{
    cout<<endl;

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

vector<int> union(vector<int& a,vector<int>& b)
{
    vector<int> ans;
    int s1=a.size();
    int s2=b.size();
    
    int i=0,j=0;

    while(i < s1 && j < s2)
    {
        if(a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        if(a[i]< b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[i])
        {
            ans.push_back(b[i]);
            j++;
        }
    }

   while(i<s1) 
   {
        if(a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        if(a[i]< b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[i])
        {
            ans.push_back(b[i]);
            j++;
        }
    }
    while(j<s1){
        if(a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        if(a[i]< b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[i])
        {
            ans.push_back(b[i]);
            j++;
        }
    }
    return ans;
}


int main()
{

    int size;
    cout<<endl<<endl;
    cout<<"Enter the size  of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    input_arr(arr,size);
    cout<<endl<<endl;
    
    print_arr(arr,size);
    cout<<endl<<endl;   

    cout<<"Array moving zeros to end :- ";
    moves_zero_to_end_opt(arr,size);
    cout<<endl<<endl;

    print_arr(arr,size);

    cout<<endl<<endl;

    return 0;
}
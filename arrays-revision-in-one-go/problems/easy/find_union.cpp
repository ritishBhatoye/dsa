#include<iostream>
#include <climits>
#include <utility>

using namespace std;

void input_vector(vector<int>& arr,int size)
{
    cout<<endl;
    
    for(int i=0;i<size;i++)
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

vector<int> union_of_two_sorted_array(vector<int>& a,int s1,vector<int>& b,int s2)
{
    vector<int> ans;
   
    
    int i=0,j=0;

    while(i < s1 && j < s2)
    {
        if(a[i] == b[j])
        {
            if(ans.empty() || a[i]!=ans.back() )
            {
                ans.push_back(a[i]);

            }
            i++;
            j++;
        }
       else if(a[i]< b[j])
        {
            if( ans.empty() || a[i]!=ans.back() ){

            ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(ans.empty() || b[j]!=ans.back() )
            {
            ans.push_back(b[j]);
            }
            j++;
        }
    }

   while(i<s1) 
   {
    if( ans.empty() || a[i]!=ans.back()){
        ans.push_back(a[i]);

    } 
        i++;
    }
    while(j<s2){
        if(ans.empty()|| b[j]!=ans.back())
        {
            ans.push_back(b[j]);
        }
       j++;
    }
    return ans;
}


int main()
{

    int s1,s2;
    cout<<endl<<endl;
    cout<<"Enter the size  of an Array 1 :- ";
    cin>>s1;
    cout<<endl<<endl;
    vector<int> a(s1);
    input_vector(a,s1);
    cout<<endl<<endl;
    cout<<"Enter the size  of an Array 2 :- ";
    cin>>s2;
    cout<<endl<<endl;
    vector<int> b(s2);
    input_vector(b,s2);
    cout<<endl<<endl;
    
    print_vector(a);
    cout<<endl<<endl;   
    print_vector(b);
    cout<<endl<<endl;   

    cout<<"Union is :- ";
    vector<int> ans=union_of_two_sorted_array(a,s1,b,s2);
    print_vector(ans);
    cout<<endl<<endl;


    cout<<endl<<endl;

    return 0;
}
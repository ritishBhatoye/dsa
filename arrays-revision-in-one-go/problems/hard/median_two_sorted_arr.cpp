#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

vector<int> mergeTwoSortedArray(vector<int>& arr1,vector<int>& arr2)
        {
            vector<int> ans;
    
            int i=0;
            int j=0;
            int s1=arr1.size();
            int s2=arr2.size();
    
            while(i<s1 && j<s2)
            {
                if(arr1[i] == arr2[j])
                {
                  
                  if(ans.empty() || ans.back()!=arr1[i])
                  {
                    ans.push_back(arr1[i]);
                  } 
    
                    i++;
                    j++;
    
                }
                else if(arr1[i] > arr2[j])

                {   
                    if(ans.empty() || ans.back()!=arr2[j])
                    {
                    ans.push_back(arr2[j]);
                    }
                    j++;
                }
                else if(arr1[i]<arr2[j])
                {
                    if(ans.empty() || ans.back()!=arr1[i])
                    {
                        ans.push_back(arr1[i]);
                        
                    }
                    i++;
                }
                else 
                {
                    if(ans.empty() || arr2[j]!=ans.back())
                    {
                        ans.push_back(arr2[j]);
                    }
                }
    
            }
    
            while(i<s1)
            {
                    if(ans.empty() || arr1[i] != ans.back())
                    {
                        ans.push_back(arr1[i]);
                    }
                    i++;
                
            }
            while(j<s2)
            {
                    if(ans.empty() || arr2[j] != ans.back())
                    {
                        ans.push_back(arr2[j]);
                    }
                    j++;
                
            }
            return ans;
        }
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
        {
            vector<int> ans=mergeTwoSortedArray(nums1,nums2);
            cout<<"After Merging Two Sorted Array "<<endl;
            cout<<endl<<endl;
            print_vector(ans);
            cout<<endl<<endl;

            double result;
            int nTerm=ans.size()-1;
            if(ans.size()%2==0)
            {
                int firstTerm=ans[(nTerm)/2];
                int secondTerm=ans[((nTerm)/2) + 1];
    
                result=(firstTerm+secondTerm)/2;
            }
            else 
            {
                result=ans[(nTerm)/2];
            }
            return result;
        }

int main()
{   
    cout<<endl<<endl;
    vector<int> a1={2,2,4,4};
    vector<int> a2={2,2,2,4,4};
    cout<<endl<<endl;
    // vector<int> merge=mergeTwoSortedArray(arr1,arr2);

    double ans=findMedianSortedArrays(a1,a2);
    cout<<endl<<endl;
    cout<<"Find the Median Sorted Array :- "<<ans<<endl;    
    cout<<endl<<endl;

    return 0;
}
    
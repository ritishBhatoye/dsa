#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr){
    vector<int> ans(arr);
    stack<int> st;
    st.push(-1);
 
    for(int i=arr.size()-1;i>=0;i--){
        int curr=arr[i];
        while(st.top() !=-1 && arr[st.top()]>=curr){
            st.pop();
        }
    ans[i]=st.top();
    st.push(i);
    }
return ans;
}

vector<int> previousSmallerElement(vector<int> arr){
    vector<int> ans(arr);
    stack<int> st;
    st.push(-1);

    for(int i=0;i<arr.size();i++){
        int curr=arr[i];
        while(st.top()!=1 && arr[st.top()]>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}


int main(){
    return 0;
}
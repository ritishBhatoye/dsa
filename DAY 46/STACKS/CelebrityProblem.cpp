#include <iostream>
#include<vector>
using namespace std;



int findCelebrity(vector<vector<int> > m){
    stack<int> st;
    int size=m.size();

    //STEP 1 :- ADD ALL ELEMENTS IN TO STACK
    for(int i=0;i<size;i++){
      st.push(i);
    }
    //STEP 2 :- 
    while(st.size()!=1){
        int first=st.top();
        st.pop();
        int second=st.top();
        st.pop();

        //STEP 3 :-
        if(m[first][second]==1){
            st.push(second);
        }
        else{
            st.push(first);
        }
    }

    //STEP 5 :- VERIFYING POTENTIAL CELEBRITY
    int ans=st.top();

    for(int i=0;i<size;i++){
        if(m[ans][i]!=0){
            return -1;
        }
        if(m[i][ans]!=1 && ans!=i){
            return -1;
        }
    }
    return ans;
}



int main(){

    vector<vector<int>> m;
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE : "<<endl;
    cout<<endl;
    cin>>size;
    cout<<"ENTER THE MATRIX : "<<endl;
    for(int i=0;i<size;i++){
        vector<int> temp(size);
        for(int i=0;i<size;i++){
            cin>>temp[i];
        }
        m.push_back(temp);
    }
    cout<<endl;
    int celeb=findCelebrity(m);
    cout<<endl;
    cout<<"CELEBRITY ELEMENT : "<<celeb<<endl;
    cout<<endl<<endl;

    return 0;
}
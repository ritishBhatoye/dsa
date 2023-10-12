//APPROACH:
//STEP 1:- USE COUNT VARIABLE 
//STEP 2:- INCREAMENT USING (RECURSION)
//STEP 3:- IF(COUNT==(SIZE/2))
//               THEN S.POP();
//STEP 4:- EXIT;

#include<iostream>
#include<stack>

using namespace std;

void deleteFromMiddle(stack<int> &s,int count,int size){
    if(count==(size/2)){
        s.pop();
        return ;
    }

    int num=s.top();
    s.pop();

    //recursive call
    deleteFromMiddle(s,count+1,size);

    s.push(num);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    deleteFromMiddle(s,0,s.size());
    cout<<endl<<endl;
    do{
        cout<<s.top()<<" ";
        s.pop();
    }while(!s.empty());
    cout<<endl<<endl;

    
    return 0;
}
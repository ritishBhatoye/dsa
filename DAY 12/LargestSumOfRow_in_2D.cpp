//#FINDING LARGEST ROW SUM IN 2D ARRAY
#include<iostream> 
using namespace std;
void LargestRow(int arr[3][3],int rol,int col){
    cout<<"PRINTING LARGEST ROW SUM "<<endl;
    cout<<"********___________********"<<endl;
    int MAX=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>MAX){
            MAX=sum;
        }
        cout<<"SUM "<<i<<" ROW IS "<<sum<<" "<<endl;
    }
    cout<<"LARGEST ROW'S SUM IS "<<MAX<<endl;
}
int main(){

    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"ENTERRED ELEMENTS IN 2D ARRAY :- "<<endl;
    for(int r=0;r<3;r++){
    for(int c=0;c<3;c++){
        cout<<arr[r][c]<<" ";
    }
    cout<<endl;
}
int rol=3,col=3;
LargestRow(arr,3,3);
    return 0;
}
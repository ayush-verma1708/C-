#include<iostream>
using namespace std;


int main(){
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int rowStart = 0 , rowEnd = n-1 , columnStart = 0 , columnEnd = m-1;
    while(rowStart <= rowEnd && columnStart <= columnEnd){
    //row Start 
    for(int column = columnStart ; column <= columnEnd ; column++){
        cout<<arr[rowStart][column]<<" ";
    }
    rowStart++;
    //end column
    for(int row = rowStart ; row<=rowEnd;row++){
        cout<<arr[row][columnEnd]<<" ";
    }
    columnEnd--;
    //row end 
    for(int column = columnEnd ; column >= columnStart ; column--){
        cout<<arr[rowEnd][column]<<" ";
    }
    rowEnd--;
    //start column
    for(int row = rowEnd ; row>=rowStart;row--){
        cout<<arr[row][columnStart]<<" ";
    }
    columnStart++;
    }
}
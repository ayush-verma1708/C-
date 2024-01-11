#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
     //   Write your code here
   int z =0;
   int o = 0;
   int t = 0;
   for(int i =0;i<n;i++){
      if(arr[i]==0){
         z++;
      }
      else if(arr[i]==1){
         o++;
      }
      else{
         t++;
      }
   }
   int count = 0;
   while(z!=0){
    cout<<"in0 "<<count<<endl;
    arr[count] = 0;
    z--;
    count++;
   }
   while(o!=0){
    cout<<"in1 "<<count<<endl;
   arr[count] == 1;
   o--;
   count++;
   }
   while(t!=0){
    cout<<"in2 "<<count<<endl;

   arr[count] == 2;
   count++;
   t--;
   }
}
int main(){
    int arr1[6] = {1,0,1,2,0,0};
    sort012(arr1,6);
    for(int i = 0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
}
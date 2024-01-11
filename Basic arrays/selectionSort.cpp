#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        for(int j = i + 1;j < size;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){ 
int k;
cin>>k;
int arr[k];
for (int i = 0; i < k; i++)
{
    cin>>arr[i];
}
int size = (sizeof(arr)/ sizeof(arr[0]));

printArray(arr , size);
selectionSort(arr, size);
printArray(arr,size);

return 0;

}
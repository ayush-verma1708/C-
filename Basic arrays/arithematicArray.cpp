#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

        int ans = 2;
    for (int i = 0 ; i < n; i++ ){
        int pd = 0;
        int current = 2;
        for(int j = 2;j<n;j++){
            if(arr[j] - arr[j-1] == pd){
                current++;
            }
            else{
                pd = arr[j] - arr[j-1];
                current = 2;
            }
            ans = max(ans,current);
        }
    }
    cout<<ans<<endl;
}
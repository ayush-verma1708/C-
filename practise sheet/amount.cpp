#include<iostream>
using namespace std;
int main(){
    int n=1556480;
    // cin>>n;

    int s =0;
    int N100 = 0;
    int N50 = 0;
    int N20 = 0;
    int N10 = 0;

    while(s!=n){
        // cout<<"in";
        while(s+100 <= n){
            // cout<<"in 100"<<endl;
            s = s+100;
            N100++;
        }
        // cout<<"out"<<endl;
        while(s+50 <= n){
            // cout<<"in 50";
            s = s+50;
            N50++;
        }
        while(s+20 <= n){
            s = s+20;
            N20++;
        }
        while(s+10 <= n){
            s = s+10;
            N10++;
        }

    }
    cout<<"No . 100 Notes needed were"<<N100<<endl;
    cout<<"No . 50 Notes needed were"<<N50<<endl;
    cout<<"No . 20 Notes needed were"<<N20<<endl;
    cout<<"No . 10 Notes needed were"<<N10<<endl;
}
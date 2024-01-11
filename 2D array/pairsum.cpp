#include<iostream>
#include<vector>

using namespace std;

int calculate_pairs(vector<int> vec) {
    int totalSum = 0;
    for(int i = 0;i<vec.size() -1 ;i++){
        int pairSum = 0;
        for(int j = i;j<vec.size() -1;j++){
            pairSum = vec.at(i) * vec.at(j);
        }
        totalSum+=pairSum;
    }
    return totalSum;
}

int main(){

}
#include<iostream>
using namespace std;

struct employee{
    int id;
    float salary;
    char favchar;
};
int main(){
    employee harry;
    harry.salary=12345;
    harry.favchar='s';
    harry.id=45;
    cout<<harry.favchar;
    return 0;
}
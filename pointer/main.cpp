#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int num = 5;
    // address of num
    cout<<"Address of NUM : "<<(&num)<<endl;

    cout<<"Pointer ---->"<<endl;

    int * ptr = &num;
    cout<<"Address of NUM : "<<ptr<<endl;
    cout<<"value of ptr : "<<*ptr<<endl;
    (*ptr)++;
    cout<<"value of ptr : "<<*ptr<<endl; 
    cout<<"size of num block is : "<<sizeof(num)<<endl;
    cout<<"size of ptr block is : "<<sizeof(ptr)<<endl;
    return 0;
}


//  '*' -> derefrence operator
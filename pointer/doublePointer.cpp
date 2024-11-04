#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int i = 5;
    int * ptr = &i;
    int** dptr = &ptr;
    cout<<"all good"<<endl;
    cout<<"printting p : "<<ptr<<endl;
    cout<<"printting p : "<<*dptr<<endl;
    cout<<"printting adress p : "<<&ptr<<endl;



    cout<<"value of i :"<<i<<endl;
    cout<<"value of i :"<<*ptr<<endl;
    cout<<"value of i :"<<**dptr<<endl;
    return 0;
}
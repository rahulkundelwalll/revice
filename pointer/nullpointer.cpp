#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    // Null pointer
    // int * ptr;
    // cout<<*ptr<<endl;


    // new technique to initialize
    // int i = 5;
    // int *p = 0;
    // p = &i;
    // cout<<*p<<endl;
    // cout<<p<<endl;

    // int num = 5;
    // int a = num;
    // a++;


// coping a pointer
    int num = 5;
    int *p = &num;

    int *q = p;
    cout<<p<<"___"<<q<<endl;
    cout<<*p<<"---"<<*q<<endl;


    // important concept
    int i = 4;
    int *t = &i;
    cout<<(*t)++<<endl;
    return 0;
}

// if we write like ptr = ptr +1 
// it will jump to 4 bute if interger else sizeof datatype
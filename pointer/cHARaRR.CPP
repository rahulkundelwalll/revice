#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";
    cout<<arr<<endl;
    // it print whole string
    cout<<ch<<endl;

    char * ptr = &ch[0];
    // print entire string
    cout<<ptr<<endl;


// it will print from start address then it will find nulll string in memory
    char temp = 'b';
    char *p = &temp;
    cout<<p<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int arr[10];
    for(int i = 0 ; i < 10;i++)
    {
        arr[i]=i*10;
    }
    cout<<"address of First memory block is : "<<arr<<endl;
    cout<<"address of First memory block is : "<<&arr[0]<<endl;
    cout<<"value of index 0 : "<<*arr<<endl;
    cout<<"value of index 1 : "<<*(arr+1)<<endl;
    cout<<"add one in index 0 : "<<(*arr)+1<<endl;
    cout<<2[arr]<<endl;
    return 0;
}


// important
// arr[i] = *(arr+i)
// i[arr]=*(i+arr)

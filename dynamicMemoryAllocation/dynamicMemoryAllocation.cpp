#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int *arr,int n)
{
    int sum = 0;
    for(int i = 0; i < n ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    //  pointer in stack poitin to dynamic memoerr created by new keyboard
    // int* num = new int;
    // *num  = 5;
    // cout<<*num<<endl;
    // cout<<sizeof(num)<<endl;

    // Array
    // int n;
    // cin>>n;
    // int * arr = new int[n];

    // for(int i = 0 ; i < n ; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<sum(arr,n);
    // delete []arr; for array deletion in stack
    // delete i; for varialble
   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// int getSum(int arr[],int n)
// {
//     cout<<endl<<sizeof(arr)<<endl;

//     int sum = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
// }

int getSum(int *arr,int n)
{
    cout<<endl<<sizeof(arr)<<endl;
    
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int arr[5] = {2,3,4,5,5};
    cout<<getSum(arr,5);
    return 0;
}
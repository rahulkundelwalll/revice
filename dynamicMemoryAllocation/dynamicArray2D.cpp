#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n,m;
    cin>>n>>m;
    int ** arr = new int*[n];
    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = new int[m];
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n ; i++)
    {
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}
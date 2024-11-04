#include <bits/stdc++.h>
using namespace std;
#define ll long long
void update(int i)
{
    i++;
}
void update1(int &i)
{
    i++;
}
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int i = 5;
    // int & j = i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // cout<<j<<endl   ;


// without & in update pass by value
    cout<<i<<endl;
    update(i);
    cout<<i<<endl;
    // with & in update pass by reference
    cout<<i<<endl;
    update1(i);
    cout<<i<<endl;
    return 0;
}
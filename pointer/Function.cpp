#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(int *p)
{
    cout<<*p<<endl;
}


void update(int *p)
{
    *p = *p+1;
    p = p+1;
    cout<<"insde : "<<p<<endl;
    
}
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int value = 5;
    int *p = &value;
    update(p);
    print(p);
    return 0;
}
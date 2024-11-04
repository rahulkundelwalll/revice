#include <bits/stdc++.h>
using namespace std;
#define ll long long

class A{
    public:
    static int  x=0;
    void incX()
    {
        x = x+1;
    }
};
void fun()
{
    static int x = 0;
    cout<<x<<endl;
    x++;
}
void fun1()
{
    int x = 0;
    cout<<x<<endl;
    x++;
}
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    // fun();
    // fun();
    // fun();
    // fun1();
    // fun1();
    // fun1();
    A obj;
    A obj1;
    cout<<obj.x<<endl;
    obj.incX();
    cout<<obj.x<<endl;
    cout<<obj.x<<endl;
    return 0;
}
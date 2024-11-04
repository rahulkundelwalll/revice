#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Print
{
public:
    void show(int x)
    {
        cout << x;
    }
    void show(char x)
    {
        cout << x;
    }
};

class Parent
{
public:
void show(){
    cout<<"parent\n";
}
virtual void hello()
{
    cout<<"hellop from p\n";
}
};
class Child : public Parent
{
public:
void show(){
    cout<<"child\n";
}
void hello()
{
     cout<<"hellop from C\n";
}
};

int
main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // Print p1;
    // p1.show(1);
    // p1.show('s');
    Child c1;
    c1.hello();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class shape{
    virtual void draw()=0; // pure when we assigned citaul function it make class abstract
};

class Circle: public shape{
    public:
    void draw(){
        cout<<"drawing a Cicle\n";
    }
};
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    Circle c;
    c.draw();
    return 0;
}
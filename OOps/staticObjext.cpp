#include <bits/stdc++.h>
using namespace std;
#define ll long long
 class ABC{
    public:
    ABC(){
        cout<<"contructor\n";
    }
    ~ABC(){
        cout<<"detructor\n";
    }
};
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    if(true)
    static ABC obj;
    cout<<"main function end\n";
    return 0;
}
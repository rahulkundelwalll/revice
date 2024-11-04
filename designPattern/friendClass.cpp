#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Singleton{
    private:
    Singleton() = default;
    public:
    int data;
    static Singleton& get_instances()
    {
        static Singleton instance ;
        return instance;
    }
    Singleton(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton & operator = (const Singleton&) = delete;
    Singleton &operator = (const Singleton&&) = delete;

};



int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    Singleton& s1 = Singleton::get_instances();
    s1.data = 10;
    cout<<s1.data<<endl;
    Singleton& s2 = Singleton::get_instances();
    s2.data = 100;
    cout<<s1.data<<endl;
    return 0;
}
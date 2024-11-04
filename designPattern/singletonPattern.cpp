#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Singleton{
    private:
    Singleton() = default;
    public:
    int data;
    static Singleton& get_instance()
    {
        static Singleton instance;
        return instance;
    }
    Singleton(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator = (const Singleton&) = delete;
    Singleton& operator = (const Singleton&&)= delete;

    
};


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    // Singleton bad_singleton;
    Singleton &singleton1  = Singleton::get_instance();
    singleton1.data = 20;
    cout<<"singleton1 data : "<<singleton1.data<<endl;
    Singleton &singleton2  = Singleton::get_instance();
    cout<<"singleton2 data : "<<singleton2.data<<endl;
    // singleton1.data = 20;

    Singleton::get_instance().data = 50;
    cout<<"singleton data : "<<Singleton::get_instance().data<<endl;


    // Singleton singletonN = singleton1; //copy the class contructor
    // singletonN.data = 100;
    // cout<<"singleton data : "<<Singleton::get_instance().data<<endl;
    // cout<<"singletonN data : "<<singletonN.data<<endl;
    return 0;
}


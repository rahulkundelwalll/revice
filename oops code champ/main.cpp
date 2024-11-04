#include <bits/stdc++.h>
using namespace std;
#define ll long long
class AbstractE{
    virtual void AskForPromostion() = 0;
};
class E :  AbstractE{

    // private:
    
    public:
    string name;
    string company;
    int age;
    E(string name,string company,int age)
    {
        this->name = name;
        this->company = company;
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void info()
    {
        cout<<"name - "<<name<<endl;
        cout<<"company - "<<company<<endl;
        cout<<"age - "<<age<<endl;
    }
    void AskForPromostion(){

    }

};

class Dev:public E{
    public:
    string fav;
    Dev(string name,string company,int age,string fav): E(name,company,age){
        this->fav = fav;
    }
    void Fixbug()
    {
        cout<<getName()<<" fix bug using "<<fav<<endl;
    }
}; 
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    // E e1( "rahul","google",23);
    // e1.name = "rahul";
    // e1.company = "google";
    // // e1.age = 23;
    // e1.setName("amit");
    // cout<<e1.getName()<<endl;
    // e1.info();
    Dev d("name","google",21,"c++");
    // d.name = "name";
    d.Fixbug();

    return 0;
}
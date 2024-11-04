#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Person{
    public:
    string name;
    int age;

    Person(string name,int age)
    {
        this->name = name;
        this->age =age;
    }
    Person()
    {
       cout<<"parent"<<endl;
    }
};

class Student : private Person{
    public:
    int rollno;
    Student(string name,int age,int rollno) : Person(name,age){
        this->rollno = rollno;
    }
    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Rollno : " << rollno << endl;
    }
};
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    Student s1("rabul",32,21) ;
    // s1.name = "rabul";
    cout<<s1.name<<endl;
    s1.getInfo();
    return 0;
}
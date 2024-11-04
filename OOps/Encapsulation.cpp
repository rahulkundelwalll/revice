#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Teacher
{
    // properties // attributes
private:
    double salary;

public:
string name;
    string dept;
    string subject;
    // non - parametrized contructor
    Teacher()
    {
        cout<<"hi i am contructor"<<endl; 
    }
    //  parametrized contructor
    Teacher(string name,string dept,string subject,double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
   
    // copy contructor
    Teacher(Teacher &orgObj){
        cout<<"I am copy contructor and cutom"<<endl;;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary = s;
    }
    // getter
    double getSalary()
    {
        return salary;
    }
};

class Account
{
private:
    double balance;
    string password;

public:
    string username;
    string accountId;
};


class Student{
    public:
    string name;
    double* cgpaPtr;
    
    Student(string name,double cgpa){
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo()
    {
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
    }
    // detructor
    ~Student(){
        cout<<"Hi, I delet everything \n";
        delete cgpaPtr;
    }
};
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // Teacher T1("subhasis","CSE","HPC",10000);
    // // T1.name = "subhasis";
    // // T1.dept = "CSE";
    // // T1.subject = "HPC";

    // T1.setSalary(7237250285);
    // Teacher T2(T1);
    // cout <<T2.name << endl;
    Student s1("rahul kumar",8.9);
    Student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    return 0;
}
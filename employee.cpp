#include<iostream>
using namespace std;
class Employee {
protected:
    string name;
public:
    Employee() {
        name="NA";
    }
 Employee(string n) { name=n;}
};
class Department {
protected:
    string deptname;
public:
    Department() {
        deptname="NA"; } Department(string d) {
        deptname=d;}
};
class Manager : public Employee, public Department {
public:
    Manager(string n,string d) : Employee(n), Department(d) {}
 void display() {
        cout<<"\n Employee Name: "<<name;
        cout<<"\n Department: "<<deptname;
    }
};
int main() {
    Manager m1("abc","HR");
    //m1.name="ishita";
    m1.display();
    return 0;
}
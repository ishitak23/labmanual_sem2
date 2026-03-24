#include<iostream>
using namespace std;
class person{
    string name;int age;
    public:
    person()
    {
        name="default";
        age=18;
    }
    person(string nm,int ag)
    {
        name=nm;age=ag;
    }
    void display()
    {cout<<"\n name ="<<name<<"\n age ="<<age;}
};
class student:public person
{string rollno;
    public:
    student()
    {
        rollno="25csu000";
    }
    student(string nm,int ag,string rno):person(nm,ag)//calling parent classconstructor
    {
        rollno=rno;
    }
    void display_student()
    {
        display();
        cout<<"\n rollno="<<rollno;
    }
};
int main()
{student p1,p2("abcd",23,"25csu090");
p1.display();
p1.display_student();
p2.display_student();
return 0;
}
#include<iostream>
using namespace std;

class student {
 int marks;
 string name;
 public:
 student();
 student(string ,int );
 void displayresult();
 ~student();//destructor
};
student::student(string n,int m){
    name=n;
    marks=m;
}
student::student()
{name="idk ";marks=1;
}
void student::displayresult(){
 cout<<"name"<<name;
 cout<<"\n marks"<<marks;
}
student::~student(){
    cout<<"destroyed";
}
int main(){
    student s1("abc",12), s2;
    s1.displayresult();
    s2.displayresult();
    return 0;
}


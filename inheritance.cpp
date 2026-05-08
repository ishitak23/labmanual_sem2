#include<iostream>
using namespace std;
class A{
    int a;
public:
A(){  a = 100;
 cout<<"Constructor of A"<<endl;
 }
void displayA(){
        cout<<"Value of a: "<<a<<endl;
    }
~A(){
        cout<<"Destructor of A";
    }
};
class B:public A{
    int b;
    public:
B(){ b = 219;
    cout<<"constructor of b"<<endl;
}
void displayB(){
    cout<<"value of b:"<<b<<endl;
}
~B(){
    cout<<"destructor of b";
}
};
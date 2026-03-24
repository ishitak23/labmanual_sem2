#include <iostream>
using namespace std;
class student;
{
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    void inputdetails()
    {
        cout << "\n enter rollNo,name,marks1,marks2,marks3 ";
        cin >> rollNo >> name >> marks1 >> marks2 >> marks3;
    }
    int calculatetotal() // getter
    {
        return (marks1 + marks2 + marks3);
    }

    void displaydetails() // getter
    {
        cout << "\n name;" << name <<"\n marks1"<<marks1<< "\n marks2 :" << marks2 << "\nmarks3:" << marks3;
        cout << "\nmarks1:" << marks1 << "\n marks2:" << "\nmarks3:" << marks3;
        cout << "\ntotal:" << calculatetotal();
    }
};
int main()
{
    student s1;
    s1.inputdetails();
    s1.displaydetails();
    return 0;
}
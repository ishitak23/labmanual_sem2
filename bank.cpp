#include<iostream>
using namespace std;
class bank{
	string accountHolderName;
	int accountNumber;
	double balance;

public:
void inputDetails(){
    cout<<"\n enter name, number,balance";
    cin>>accountHolderName>>accountNumber>>balance;

}
	void displayDetails(){
        cout<<"\n accname is :"<<accountHolderName<<"\n no.is :"<<accountNumber<<"\nbalance is:"<<balance;
    
    }
    
};

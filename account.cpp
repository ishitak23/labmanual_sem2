#include<iostream>
using namespace std;

class account {
    string accountno;

protected:
    float balance;

public:
    account() {
        cout<<"\n default account";
        accountno="NA";
        balance=0;
    }

    account(string accno,float bal) {
        cout<<"\n parameterized account";
        accountno=accno;
        balance=bal;
    }

    void displayaccount() {
        cout<<"\n account number: "<<accountno;
        cout<<"\n account balance: "<<balance;
    }
};

class savingsaccount : public account {
    float int_rate;

public:
    savingsaccount() {
        cout<<"\n default savings account";
        int_rate=1;
    }

    savingsaccount(string accno,float bal,float rate) : account(accno,bal) {
        cout<<"\n parameterized savings account";
        int_rate=rate;
    }

    void calculateinterest() {
        float interest=balance*int_rate/100;
        cout<<"\n interest: "<<interest;
    }

    void display() {
        displayaccount();
        cout<<"\n interest rate: "<<int_rate;
    }
};

int main() {
    savingsaccount s1;
    s1.display();
    s1.calculateinterest();

    cout<<"\n";

    savingsaccount s2("12345",5000,5);
    s2.display();
    s2.calculateinterest();

    return 0;
}
    



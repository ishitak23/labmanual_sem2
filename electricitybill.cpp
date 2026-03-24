#include<iostream>
using namespace std;
class ElectricityBill{
    string consumerName;
    int units;
    float billAmount;
    public:
    ElectricityBill();
    ElectricityBill(string,int);
    void calculateBill();
    void displayBill(); 
};
ElectricityBill::ElectricityBill(){
    consumerName="na";
    units=0;
    billAmount=0;
}
ElectricityBill::ElectricityBill(string a,int b){
consumerName=a;
units=b;
}
void ElectricityBill::calculateBill(){
    if(units<=100){
        billAmount=units*5;
    }
    else
    if(units>100 && units<=200){
        billAmount=units*7;
    }
    else{
        billAmount=units*10;
    }
}
void ElectricityBill::displayBill(){
    calculateBill();
    cout<<"\nConsumer Name : "<<consumerName<<"\nUnits Consumed : "<<units<<"\nTotal Bill Amount : "<<billAmount;
}
int main(){
    ElectricityBill a1;
    a1.displayBill();
    ElectricityBill a2("abc",10o);
    a2.displayBill();
    return 0;
}
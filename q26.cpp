#include<iostream>
using namespace std;
int main(){
    int marks[5] , total=0;
    cout<<"enter the marks"<<endl;
    for(int i=0;i<5;i++){
    cin>>marks[i];
    total+=marks[i];
    }
    float percentage;
    percentage=total/5.0;
    cout<<"the percentage is"<<percentage<<"%";
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a[30], min;
    for(int i=0;i<30;i++) cin>>a[i];
    min=a[0];
    for(int i=0;i<30;i++){
        if(a[i]<min) min=a[i];
    }
    cout<<min;
}
#include<iostream>
using namespace std;
int main(){
    int a[5], even=0, odd=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]%2==0) even=even+a[i];
        else odd=odd+a[i];
    }
    cout<<even<<endl;
    cout<<odd;
}
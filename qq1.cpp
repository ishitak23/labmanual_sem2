#include<iostream>
using namespace std;
int result(int,int,int,int,int);
int result(int,int,int,int);
int result(int,int);
int result(int,int, int);

int main(){
    cout<<result(47,69,84,56,75)<<endl;
    cout<<result(78,49,65,77)<<endl;
    cout<<result(45,58)<<endl;
    cout<<result(57,68,95);

return 0;

}
int result(int a,int b,int c,int d,int e){
    return a+b+c+d+e;
}

int result(int a,int b,int c,int d){
    return a+b+c+d;
}

int result(int a,int b){
    return a+b;
}

int result(int a,int b,int c){
    return a+b+c;
}
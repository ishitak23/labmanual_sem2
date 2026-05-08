#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("ishitafilea.txt");
    fout<<11<<" "<<23<<" "<<45;
    fout.close();
    ifstream fin("ishitafilea.txt");
    int a,b,c;
    fin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<a+b+c;
    fin.close();
}
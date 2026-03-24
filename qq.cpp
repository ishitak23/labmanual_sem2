#include<iostream>
using namespace std;
int sum(int,int);
int sum(float,float);

int main(){


cout<<sum(5,10);
cout<<sum(5.25f,10.20f);
cout<<sum(5.2869f,10.2859f);
return 0;

}
int sum(int n1,int n2)
{ cout<< "sum method";
return n1+n2;}

float sum(float f1, float f2)
{cout<< "float method";
return f1+f2;}



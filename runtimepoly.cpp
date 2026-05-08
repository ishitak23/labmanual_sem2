// runtime polyphormism
#include<iostream>
using namespace std;
class shape{
public:
shape(){cout<<"\n shape default const called";}
virtual void area() 
{cout<<"\n no dim no area";}
virtual void display() final //final-to not do overriding
{cout<<"\n we are 2d shapes";}
};
class rectangle: public shape
{
    public:
    int length;int width;
    rectangle(int l=5,int w=10): length(l),width(w)
    {cout<<"\n rectangle object created";}
    void area(){cout<<"\n area ="<<length*width;}
};
int main()
{
   rectangle r2(50,45);
    return 0;

};
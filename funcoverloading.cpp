#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int width;
 
 public: 
    rectangle()
    { 
        length=0;width=0;
    }
    rectangle(int l,int w)
    {
        length=l;width=w;
    }
void display()
{
    cout<<"\n length="<<length;
    cout<<"\nwidth="<<width;
    cout<<"\n no of objects created:";
}
//friend void area(rectangle obj);
};
void area(rectangle obj)
{
    cout<<"\n area="<<obj.length*obj.width;

}

int main()
{
    rectangle r1;
     //cout<<r1.length;
     r1.display();
       area(r1);
    rectangle r2(3,3);
   
    r2.display();
    area(r2);
    return 0;
}
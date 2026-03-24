#include<iostream>
using namespace std;
class candy{
    string color;
    int points;
    public:
    candy();
    candy(string clr);
    candy(string clr,int pts);
    void setcandy(string,int);
    void displaycandy();
    void loose_candy();
    void loose_candy(int);
    void gain_candy();
    void gain_candy(int);

};
candy::candy()
{color="black";points=0;
}
candy::candy(string clr,int pts)
{color=clr;points=pts;
}
void candy::setcandy(string c,int p)
{
    color=c;points=p;
}
void candy::displaycandy()
{
    cout<<"\n color:"<<color;
    cout<<"\n points:"<<points;
}
int main()
{
    candy c1,c2;
    c1.setcandy("red",35);
    c2.setcandy("blue",40);
    c1.displaycandy();
    c2.displaycandy();
    
    return 0;
}
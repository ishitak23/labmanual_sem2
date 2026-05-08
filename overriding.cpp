#include<iostream>
using namespace std;

class shape{
public:
void area(){
cout<<"\n no dimensions, no area";
}

void perimeter(){
cout<<"\n no dimensions, no perimeter";
}

void dimension(){
cout<<"\n nothing to display";
}

void display(){
cout<<"\n*********we are 2D shapes********";
}
};

class square:public shape{
int side;
public:
square(){side=0;}
square(int s){side=s;}

void area(){
cout<<"\n area of square = "<<side*side;
}
};

int main(){
square s(5);
s.display();
s.area();
}
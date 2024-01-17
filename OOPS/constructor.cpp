// function that is called when object is created

#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
    Rectangle(){   //default constructor
        l=0;
        b=0;
    }
    Rectangle(int x,int y){  //parameterised constructor
        l=x;
        b=y;
    }
    Rectangle(Rectangle &r){ //copy constructor - initialise an object by other object
        l=r.l;
        b=r.b;
    }
};
int main(){
    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    Rectangle r2(2,3);
    cout<<r2.l<<" "<<r2.b<<endl;
    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}
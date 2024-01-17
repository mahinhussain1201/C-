//funtion thatbis called when object is deleted
// cannot pass any parameters
// nane: ~(class_name)

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
    ~Rectangle(){ //Destructor
        cout<<"Destructor is called"<<endl;
    }
};
int main(){
    Rectangle *r1=new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;//only for pointer variable
    
    Rectangle r2(2,3);
    cout<<r2.l<<" "<<r2.b<<endl;
    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}
// a class inherites property of another class
// class whose property is being inherited -> parent/super class
// class which inherits ->child/sub class

// Access Specifiers:
// public
// private : accessible only in own class
// protected : accesible in own class,parent class,child class

#include<iostream>
using namespace std;
class Parent{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
};

class Child1: public Parent1{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};
class Child2: private Parent{
    // x will be private
    // y will be private
    // z will not be accessible 
};
class Child2: protected Parent{
    // x will be protected
    // y will be protected
    // z will not be accessible 
};
int main(){
    Parent p;
    p.x;
    return 0;
}
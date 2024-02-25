// Heirarchical Inheritance->two classes inherits one class(one Parent two Child)
// Hybrid Inheritance->heirarchical+multilevel inheritance
// Diamond Problem->base class have multiple parent classes having a common ansectoral class

#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};
class Child: public Parent{ //single level inheritance
    public:
    Child(){
        cout<<"Child class"<<endl;;
    }
};
class Grandchild: public Child{ //multilevel inheritance
    public:
    Grandchild(){
        cout<<"Grandchild"<<endl;
    }
};
class Neighbour: public Parent, public Child{  //multiple inheritancek
    public:
    Neighbour(){
        cout<<"Outsider";
    }
};
int main(){
    // Child c;
    // Grandchild gc;
    Neighbour n;
    return 0;
}
// ability of objects/methods to take different forms(Eg:right)
// Function Overloading->define a no. of function with same function name, they
// perform differently according to arguments passed

// runtime polymorphism->resolved at runtime, using function overriding
// func. name and params same
// slower, less memory efficient
// compiletime polymorphism->function overloading, operator overloading
// same func. name params different
// faster, more memory efficient


#include<iostream>
using namespace std;
class Sum{
    public:
    void add(int x,int y){
        int sum=x+y;
        cout<<sum<<endl;
    }
    void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }
    void add(float x,float y){
        float sum=x+y;
        cout<<sum<<endl;
    }
};
int main(){
    Sum s;
    s.add(1,2);  //compile time polymorphism
    s.add(1,2,3);
    s.add(float(1.2),float(2.3));
    return 0;
}
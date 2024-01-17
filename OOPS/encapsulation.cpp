// binding of methods and variables together into a single unit(class) by ensuring that data is only accesible from class method
// also lead to data abstraction/hiding, class->Abstract data type(ADT)

#include<iostream>
using namespace std;
class ABC{
    int x;
    public:
    void  set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};
int main(){
    ABC obj1;
    obj1.set(3);
    cout<<obj1.get();
    return 0;
}
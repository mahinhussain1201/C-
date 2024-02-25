// non member function which can access private members of the class

#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int y){
        x=y;
    }
    friend void print(A &obj);
};
void print(A &obj){
    cout<<obj.x<<endl;
}
int main(){
    A obj(99);
    // cout<<obj.x; //private here
    print(obj);
    return 0;
}
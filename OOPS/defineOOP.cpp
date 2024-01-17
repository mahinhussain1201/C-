#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string roll_no;
};
int main(){
    Student A; //object
    A.name="abc";
    A.roll_no="123";
    cout<<A.name<<" - "<< A.roll_no<<endl;

    Student *B=new Student();//pointer to B
    B->name="xyz";
    B->roll_no="456";
    cout<<B->name<<" - "<< B->roll_no<<endl;
    return 0;
}
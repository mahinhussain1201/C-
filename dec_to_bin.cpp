
//understand this

#include<iostream>
using namespace std;
int main(){
    int decimal;
    cin>>decimal;
    int a,binary=0,power=1;
    while(decimal!=0){
        a=decimal%2;
        binary=binary+(a*power);
        power*=10;
        decimal=decimal/2;
    }
    cout<<binary;
    return 0;
}
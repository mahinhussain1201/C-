// n, n-5, n-10, ..., 0, 5, 10, ..., n-5, n
// There should be 0 or at most one occurrence of negative number in the series.

// Sample Input: n = 16
// Sample Output: 16, 11, 6, 1, -4, 1, 6, 11, 16

// Sample Input: n = 10
// Sample Output: 10, 5, 0, 5, 10

#include<iostream>
using namespace std;
void f(int n,int x,int t){
   if(x>n)
   return;
   if(x<=0){
    cout<<x<<" ";
    x+=5;
    t*=-1;
   }
   if(t>0){
    cout<<x<<" ";
    return f(n,x+5,t);
   }
   else if(t<0){
    cout<<x<<" ";
    return f(n,x-5,t);
   }
}
int main(){
f(16,16,-1);
return 0;
}
#include <iostream>
#include<vector>
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
    // vector<int>v;
    // for(int i=0;i<5;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    f(10,10,-1);
    return 0;
}
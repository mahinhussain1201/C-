// I/P : 5 4 3 2 1
// O/P : 5  4  3  2  1
//       9  7  5  3
//       16 12 8
//       28 20
//       48

#include<iostream>
#include<vector>
using namespace std;
void f(vector<int>&v,int start,int end){
    if(start==end)
    return;
    vector<int>n;
    int j=0;
    for(int i=0;i<v.size()-1;i++){
    n.push_back(v[i]+v[i+1]);
    v[j]=n[j];
    if(j<=end-start-1)
    cout<<n[j++]<<" ";
    }
    cout<<endl;
    f(v,start+1,end);
}
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    f(v,0,v.size()-1);
}
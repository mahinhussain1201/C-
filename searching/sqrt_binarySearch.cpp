// imp Question for interview
// time complexity:O(logx)

#include<iostream>
#include<vector>
using namespace std;
int f(vector<int>&v,int lo,int hi,int x){
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]*v[mid]<=x){
            ans=v[mid];
            lo=mid+1;
        }
        else
        hi=mid-1;
       
    }
     return ans;
}
int main(){
    vector<int>v;
    int x;
    cin>>x;
    for(int i=0;i<=x;i++){
        v.push_back(i);
    }
    cout<<f(v,0,v.size()-1,x);
    return 0;
}
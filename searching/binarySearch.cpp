// space complexity:O(1) for iterative
// O(log n) for recursive

// time complexity:O(log n)

// mid=lo+(hi-lo)/2 for very big lo and hi




#include<iostream>
#include<vector>
using namespace std;

void binarySearch(vector<int>&v,int x){
    int n=v.size();
    int lo=0,hi=n-1,mid,result=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(x==v[mid]){
            result=mid;
            break;
        }
        else if(x<v[mid])
        hi=mid-1;
        else
        lo=mid+1;
    }
    cout<<result;
}

int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int x;
    cin>>x;
    binarySearch(v,x);
    return 0;
}
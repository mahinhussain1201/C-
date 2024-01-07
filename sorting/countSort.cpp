// max no. should be order of n
// not for floating, disparity between no. and -ve no.
// for -ve no. array should be normalised by subtracting min  no. from all and adding it after sorting
// time O(n+max)
// space O(n+k)


#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int>&v){
    int n=v.size();
    int big=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>big)
        big=v[i];
    }
    
    vector<int>freq(big+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    for(int i=1;i<=big;i++)
    freq[i]+=freq[i-1];
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
       ans[--freq[v[i]]]=v[i]; 
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    // vector<int>an
    countSort(v);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
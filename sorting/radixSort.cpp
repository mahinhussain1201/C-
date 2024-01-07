// time O(d*n)
// space O(n)


#include<iostream>
#include<vector>
using namespace std;
void countSort(vector<int>&v,int pos){
    vector<int>freq(10,0);
    int n=v.size();
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++)
    freq[i]+=freq[i-1];
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--)
    ans[--freq[(v[i]/pos)%10]]=v[i];
    for(int i=0;i<n;i++)
    v[i]=ans[i];
}
void radixSort(vector<int>&v){
    int n=n;
    int big=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>big)
        big=v[i];
    }
    for(int pos=1;big/pos>0;pos*=10){
        countSort(v,pos);
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
    radixSort(v);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
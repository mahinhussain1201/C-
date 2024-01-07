// Repeatedly select one element from unsorted array and insert it into sorted array

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int curr=v[i];
        int j=i-1;
        while(j>=0 && v[j]>curr){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=curr;
    }
}

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    insertionSort(v);
    int size=v.size();
    for(int i=0;i<size;i++)
    cout<<v[i]<<" ";
    return 0;
}
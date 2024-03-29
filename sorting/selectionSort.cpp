// Repeatedly find min element and place at begining of unsorted array

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_idx])
            min_idx=j;
        }
        if(min_idx!=i)
        swap(v[i],v[min_idx]);
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
    selectionSort(v);
    int size=v.size();
    for(int i=0;i<size;i++)
    cout<<v[i]<<" ";
    return 0;
}
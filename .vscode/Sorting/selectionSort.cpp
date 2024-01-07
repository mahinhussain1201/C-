#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index])
            min_index=j;
        }
        if(min_index!=i)
        swap(v[i],v[min_index]);
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
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}
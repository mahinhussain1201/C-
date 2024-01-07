// scatter and gather approach
// time-O(n^2) for avg case- O(n+k)
// space-O(n+k)

// if element are greater than 1
// range=(max-min)/size;
// index=(arr[i]-min)/range;

#include<iostream>
#include<vector>
using namespace std;

void bucketSort(float arr[],int size){
    vector<vector<float> >bucket(size,vector<float>());
    for(int i=0;i<size;i++){
        int index=arr[i]*size;
        bucket[index].push_back(arr[i]);
    }
    for(int i=0;i<size;i++){
        if(!bucket[i].empty())
        sort(bucket[i].begin(),bucket[i].end());
    }
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }
}

int main(){
    float arr[]={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size=sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr,size);
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;
}
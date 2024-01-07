// divide and conquer->Master's Relation
// best case time complexity nlogn when pivot is dividing array in equal parts
// worst case O(n*n)
// space O(n)
// random pivot-> pivot=first+rand()%(last-first+1)
// not stable
// performs better in samller data, merge sort for large data
// cannot be used in linked list

#include<iostream>
using namespace std;

int partition(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    int j=first;
    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}
void quickSort(int arr[],int first,int last){
    if(first>=last)
    return;
    int pi=partition(arr,first,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi+1,last);
}
int main(){
    int arr[5]={1,4,9,4,2};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}
// if no more swapping is done, that is array has been sorted before
// ending of loop , the loop will break


#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,93,7,2,4};
    int n=5;
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=true;
            }
        }
        if(!flag)
        break;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;
bool f(int **arr,int i,int j,int m,int n,vector<int>&v){
    if(i==m-1 && j==n-1){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
}
int main(){
    // vector<int> v;
    // for(int i=0;i<4;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    // f(v,0,1);
    int arr[5][5]={{1,0,1,0,1},{1,1,1,1,1},{0,1,0,1,0},{1,0,0,1,1},{1,1,1,0,1}};
    int m=5,n=5;
    vector<vector<int> >v(m,vector<int>(n,0));
    f(arr,0,0,m,n,v);
}
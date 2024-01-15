#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<vector<int> >&v,int i,int j,int n){
    if(i<n && j<n && v[i][j]==1)
    return true;
    return false;
}
bool ratInMaze(vector<vector<int> >&v,int i,int j,int n,vector<vector<int> >&result ){
    if(i==n-1 && j==n-1){
        result[i][j]=1;
        return true;
    }
    if(isPossible(v,i,j,n)){
        result[i][j]=1;
        if(ratInMaze(v,i+1,j,n,result))
        return true;
        if(ratInMaze(v,i,j+1,n,result))
        return true;
        result[i][j]=0;
        return false;
    }
    return false;
}
int main(){
    int n=5;
    vector<vector<int> >v(n,vector<int>(n));
    vector<vector<int> >result(n,vector<int>(n,0));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;
    if(ratInMaze(v,0,0,n,result)){
        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    cout<<"not";
    
    return 0;
}
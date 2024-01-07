// Pascal triangle using 2D  vector
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1...

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> > v(n);
    for(int i=0;i<n;i++){
        v[i].resize(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0||j==i)
            v[i][j]=1;
            else
            v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void f(char *arr,int idx,int n,string s,vector<string>&v){
    if(idx==n){
        v.push_back(s);
        return;
    }
    f(arr,idx+1,n,s+arr[idx],v);
    f(arr,idx+1,n,s,v);

}

int main(){
    char arr[50]="abcd";
    vector<string>v;
    string s="";
    f(arr,0,4,s,v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}
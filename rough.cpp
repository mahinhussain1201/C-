#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int k;
    cin>>str>>k;
    int s=0,e=0,zeroCount=0,maxlen=0;
    for(;e<str.length();e++){
        if(str[e]=='0')
        zeroCount++;
        while(zeroCount>k){
            if(str[s]=='0')
            zeroCount--;
            s++;
        }
        maxlen=max(maxlen,(e-s)+1);
    }
    cout<<maxlen;
    return 0;
}
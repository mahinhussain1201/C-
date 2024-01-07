//    1
//   121
//  12321
// 1234321
// ...n

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int l=1;l<=n-i;l++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<j;
        for(int j=i-1;j>=1;j--)
        cout<<j;
        cout<<endl;
    }
    return 0;
}
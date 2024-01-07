
//Multiplication of matrix


#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    cin>>r2>>c2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    if(c1==r2){
         int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    cout<<"Multiplication not possibe";
    return 0;
}
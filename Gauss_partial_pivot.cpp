#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main(){
    fast;
    int n;
    cin>>n;
    float a[10][10],x[10];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            cin>>a[i][j];
        }
    }

    for(int j=1;j<=n;j++){
        int mxr=j;
        for(int i=j+1;i<=n;i++){
            if(a[i][j]>a[mxr][j]) mxr=i;
        }
        if(mxr!=j){
            for(int k=1;k<=n+1;k++){
                swap(a[j][k],a[mxr][k]);
            }
        }
        float pvt=a[j][j];

        for(int i=1;i<=n;i++){
            if(i!=j){
                float ft=a[i][j]/pvt;
                for(int k=1;k<=n+1;k++){
                    a[i][k]=a[i][k]-(ft*a[j][k]);
                }
            }
        }
    }

    cout<<"The solve "<<'\n';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    
    for(int i=1;i<=n;i++){
       x[i]=a[i][n+1]/a[i][i];
       cout<<"X" << i<<" "<< x[i]<<'\n';
    }
}
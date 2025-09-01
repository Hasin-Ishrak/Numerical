#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
ll n ;

void newton(vector<double>& x,vector<double>& y){
    double df[n][n];

    for(ll i=0;i<n;i++) df[i][0]=y[i];

    for(ll j=1;j<n;j++){
        for(ll i=0;i<n-j;i++){
            df[i][j]=(df[i+1][j-1] - df[i][j-1]) / (x[i+j]-x[i]);
        }
    }
    double X;
    cin>>X;
    double ans=df[0][0];
    double tm=1.0;
    for(ll i=1;i<n;i++){
        tm*=(X-x[i-1]);
        ans+=tm*df[0][i];
    }
    cout<<"Interpolation"<<ans<<'\n';
}
int main(){
    cout<<"Enter the number of ement ";
    cin>>n;
    vector<double>x(n),y(n);
    for(ll i=0;i<n;i++){
        cin>>x[i]>>y[i]; 
    }
    newton(x,y);
}
// 2 15
// 3 39
// 6 243
// 7 375
// 9 771
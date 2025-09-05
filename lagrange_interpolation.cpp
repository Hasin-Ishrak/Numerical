#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
ll n;
void lagrange(){
    
    vector<double>x(n),y(n);
    for(ll i=0;i<n;i++) cin>>x[i]>>y[i];
    
    cout<<"Value of x"<<'\n';
    double X;
    cin>>X;
    double ans=0.0;
    for(ll i=0;i<n;i++){
        double t=1.0;
        for(ll j=0;j<n;j++){
            if(i==j) continue;
            else{
               t*=(X-x[j])/(x[i]-x[j]);
            }
        }
        ans+= t*y[i];
    }
    cout<<"Solve "<<ans<<'\n';
}
int main(){
    cout<<"Number of element :";
    cin>>n;
    lagrange();
}
// 1 2
// 2 4
// 3 8
// 4 16
// 7 128
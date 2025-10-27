#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

float f(float x){
    return 1/(1+x*x);
}

float trapezoidal(float a,float b,float n){
    float h=(b-a)/n;
    float sm=(f(a)+f(b))/2;
    for(int i=1;i<n;i++){
       sm+=f(a+i*h);
    }
    return h*(sm);
}

float simpson13(float a,float b,float n){
    float h=(b-a)/n;
    float sm=f(a)+f(b),sme=0,smo=0;
    for(int i=1;i<n;i++){
        if(i%2==0) sme+=f(a+i*h);
        else smo+=f(a+i*h);
    }
    sm+=(4*smo);
    sm+=(2*sme);
    return (h/3)*sm;
}

int main(){
    fast;
    float a,b,n;
    cin>>a>>b>>n;
    cout<<"Trapezoidal "<<trapezoidal(a,b,n)<<'\n';
    cout<<"Simpson 1/3 "<<simpson13(a,b,n)<<'\n';

}
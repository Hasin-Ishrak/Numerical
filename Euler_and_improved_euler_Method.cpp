#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

float f(float x,float y){
   return x+y;
}

void improvedeuler(float xo,float yo,float x,float h){
  while(xo<x){
    float k1,k2;
    k1=f(xo,yo);
    k2=f(xo+h,yo+(k1*h));
    yo=yo+h*((k1+k2)/2);
    xo=xo+h;
  }
  cout<<"Improved Euler  value of y at x="<<xo<<" "<<yo<<'\n';
}

void euler(float xo,float yo,float x,float h){
    while(xo<x){
        yo=yo+(h*f(xo,yo));
        xo=xo+h;
    }
    cout<<"Value of Y at x="<<xo<<" is "<<yo<<'\n';
}

int main(){
    fast;
    float xo,yo,x,h;
    cin>>xo>>yo>>x>>h;
    euler(xo,yo,x,h);
    improvedeuler(xo,yo,x,h);
}
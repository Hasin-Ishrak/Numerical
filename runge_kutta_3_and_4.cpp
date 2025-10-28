#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

float f(float x,float y){
    return 3*x+y*y;
}

float rk3(float xo,float yo,float x,float h){
    while(xo<x){
      float k1,k2,k3;
      k1=f(xo,yo);
      k2=f(xo+h/2,yo+(h/2)*k1);
      k3=f(xo+h,yo-(k1*h)+(2*k2*h));
      yo=yo+h/6*(k1+4*k2+k3);
      xo=xo+h;
    }
    return yo;
}

float rk4(float xo,float yo,float x,float h){
    while(xo<x){
        float k1,k2,k3,k4;
        k1=f(xo,yo);
        k2=f(xo+h/2,yo+(k1*h)/2);
        k3=f(xo+h/2,yo+(k2*h)/2);
        k4=f(xo+h,yo+k3*h);
        yo=yo+h/6*(k1+2*k2+2*k3+k4);
        xo=xo+h;
    }
    return yo;
}

int main(){
    fast;
    float xo,yo,x,h;
    cin>>xo>>yo>>x>>h;
    cout<<"Rk 3rd Order "<<rk3(xo,yo,x,h)<<'\n';
    cout<<"Rk 4th Order "<<rk4(xo,yo,x,h)<<'\n';
}
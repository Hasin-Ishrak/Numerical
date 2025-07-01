#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
using namespace std;
const float en=1e-4;

float calcu(float nm){
    return log(3*nm)-3;
}

float regular_falsi(float l,float r){
    if(calcu(l)*calcu(r)>0) return 0;
    float c=0;
    int cnt=0;

    while(abs(r-l)>=en){
      
        c=(l*calcu(r)-r*calcu(l))/(calcu(r)-calcu(l));

        if(calcu(c)==0.0) break;
        if(calcu(l)*calcu(c)<0){
            r=c;
        }
        else l=c;

        cnt++;
    }
    cout<< "Iterations = "<<cnt<<'\n';

    return c;
}
int main(){
    fast;
    regular_falsi(1,10);
}
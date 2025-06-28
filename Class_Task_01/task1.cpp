#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
using namespace std;
const float tl=1e-6;
 
float calcu(float nm){
    return 4*nm*nm +3*nm-3;
}

float bisection(float l,float r){
    if(calcu(l)*calcu(r) >0) return -1;

    float md;
    int cnt=0;

    while(abs(r-l)>=tl){
        md=(l+r)/2;
        if(abs(calcu(md))<=tl) break;

        if(calcu(l)*calcu(md)<0) r=md;
        else l=md;
        cnt++;
    }
    cout<< "Iterations = "<<cnt<<'\n';
    return md;
}

void traditional(float l,float r){
    
    float ans=bisection(l,r);
    cout <<"Traditional Approach"<<'\n';
    cout<<"root = "<<ans<<'\n';
}

void improved(){
    float l=-1,r=-1;

     for(float i=0;i<=10;i+=0.1){
        if(calcu(i)*calcu(i+0.1)<0){
            l = i;
            r = i + 0.1;
            break;
        }
    }
    cout<<"Improved Approach "<<'\n';

    float ans=bisection(l,r);
    cout<<"root = "<<ans<<'\n';
}
int main(){
    fast;
    traditional(0,10);
    improved();
}

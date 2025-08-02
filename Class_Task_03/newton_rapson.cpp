#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
using namespace std;
const double es=1e-3;

double f(double x){
    return x*x*x*x*x-3*x+5;
}
double f2(double x){
    return 5*x*x*x*x-3;
}
double newton_rapson(double a){

    double rt;
    while(1){
        double fn=f(a);
        double fst=f2(a);
         rt=a-fn/fst;
        if(abs(rt-a)<es){
            return rt;
        }
        a=rt;
    }
    return rt;
}
int main(){
    fast;
    double a =0.5,b=1.0;
    cout <<"Root"<<'\n';
    cout<<newton_rapson(a)<<'\n';
}
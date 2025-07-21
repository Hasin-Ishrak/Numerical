#include <bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
const double true_root = (-3+sqrt(57)) / 8.0;
const double TOL = 1e-6; 
using namespace std;

double f(double x) {
    return 4*x*x+3*x-3;
}
void bisection(double a, double b) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval for Bisection Method.\n";
        return;
    }
    double c=(a+b)/2.0;
    double prev_c = c;
    double error = 100;
    int iterations = 0;
    while (error > TOL) {
        if (f(c) == 0.0)
            break;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
        prev_c = c;
        c = (a + b) / 2.0;
        error = fabs((c - prev_c) / c);
        iterations++;
    }
    double tpre = fabs((true_root - c) / true_root) * 100;
    cout << fixed << setprecision(6);
    cout << "\n--- Bisection Method ---\n";
    cout << "Root = " << c << "\n";
    cout << "Iterations = " << iterations << "\n";
    cout << "True Percentage Relative Error = " << tpre << " %\n";
}
void falsePosition(double a, double b) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval for False Position Method.\n";
        return;
    }
    double c = (a*f(b)-b*f(a))/(f(b)-f(a));
    double prev_c = c;
    double error = 100;
    int iterations = 0;

    while (error > TOL) {
        if (f(c) == 0.0)
            break;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        prev_c = c;
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        error = fabs((c - prev_c) / c);
        iterations++;
    }
    double tpre = fabs((true_root - c) / true_root) * 100;
    cout << fixed << setprecision(6);
    cout << "\n--- False Position Method ---\n";
    cout << "Root = " << c << "\n";
    cout << "Iterations = " << iterations << "\n";
    cout << "True Percentage Relative Error = " << tpre << " %\n";
}

int main() {
    double a = 0.0, b = 1.0;
    cout << fixed << setprecision(6);
    cout << "True Root (calculated): " << true_root << "\n";
    bisection(a, b);
    falsePosition(a, b);
    return 0;
}
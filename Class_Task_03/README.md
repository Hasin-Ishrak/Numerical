# Newton-Raphson Method 

This project demonstrates the implementation of the **Newton-Raphson method** in C++ to find the root of a real-valued function.

## 📌 Problem Statement

Find the root of the equation:

f(x) = x^5 - 3x + 5

Using the Newton-Raphson iterative method with the formula:

x1 = x0 - f(x0) / f'(x0)

Where:
- `f(x)`  = x^5 - 3x + 5  
- `f'(x)` = 5x^4 - 3

## 📄 Functions

```cpp
// The function f(x)
double f(double x) {
    return x*x*x*x*x - 3*x + 5;
}

// Its derivative f'(x)
double f_prime(double x) {
    return 5*x*x*x*x - 3;
}

### ✅ Result
The root was found to be approximately:

x ≈ -1.5762 (with precision eps = 1e-3)
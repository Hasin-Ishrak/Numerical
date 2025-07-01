# 🧮 TASK-01: Improved Range Selection in the Bisection Method

---

##  Topic: Improved Range Selection in the Bisection Method

---

###  Traditional Approach of Range Selection

In the **bisection method**, the accuracy and efficiency of root-finding depend significantly on the initial interval ([a, b]), where the function ( f(x) ) must be continuous and satisfy:

> **f(a) * f(b) < 0**  — _for the function_ **f(x) = 4x² + 3x – 3**

This condition ensures (by the **Intermediate Value Theorem**) that at least one root exists within that interval.

However, choosing ([a, b]) manually can be time-consuming and prone to error, especially for complex functions or large domains.

---

###  A Better Approach to Selecting the Range

####  Why Improve the Range Selection?

Traditionally, the interval is guessed manually. But this guesswork can:
- Fail to identify a valid interval.
- Be inefficient when scanning large domains.
- Introduce human error.

To address this, we implement an **Automated Interval Scanning** approach to detect sign changes programmatically and select an appropriate range with minimal manual effort.

---

####  Automated Interval Scanning

Instead of guessing the interval ([a, b]), we loop through a wider range (e.g., 0 to 10) and evaluate the function at small steps (e.g., every 0.1 unit). We check for a **sign change** in the function's output between two consecutive points. A sign change implies that a root exists between them.

---

####  C++ Code Snippet

```cpp
for (float i = 0; i <= 10; i += 0.1){
    if (calcu(i) * calcu(i + 0.1) < 0){
        l = i;
        r = i + 0.1;
        break;
    }
}

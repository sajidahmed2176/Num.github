# Numerical Integration: Trapezoidal Rule vs Simpson's Rule

## 📘 Overview

This C program demonstrates the **numerical integration** of two functions using:
- **Trapezoidal Rule**
- **Simpson's Rule**

It calculates and compares the results with exact analytical solutions for:
1. ∫₀^π sin(x) dx
2. ∫₁² ln(x) dx

It also computes the **percentage error** for both methods.

---

## 🧮 Functions Integrated

1. **f(x) = sin(x)** over [0, π]  
   - Exact Value: **2.0**

2. **f(x) = ln(x)** over [1, 2]  
   - Exact Value: **2ln(2) - 1 ≈ 0.386294**

---

## 🛠️ How to Compile and Run

### 🔧 Requirements

- GCC (GNU Compiler Collection)
- Math library (`-lm` flag)

### 💻 Compilation

```bash
gcc integration_comparison.c -o integration_comparison -lm
# Num.github

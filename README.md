# Numerical Integration: Simpson’s Rule vs Trapezoidal Rule

## (I) Introduction
Numerical integration is widely used when analytical evaluation of an integral is difficult or impossible.  
Two popular methods are:
- **Trapezoidal Rule**: Approximates the curve with trapezoids.
- **Simpson’s Rule**: Uses parabolic arcs for approximation (more accurate).

This project compares both methods on two integrals:
1. ∫₀^π sin(x) dx  
2. ∫₁² ln(x) dx  

---

## (II) Project Details
- **Course**: CSE261 Group Assignment  
- **Topic**: Implementation and Comparison of Simpson's and Trapezoidal Rules  
- **Language**: C  

---

## (III) How to Compile and Run
1. Save the code as `integration_comparison.c`
2. Open a terminal and compile:
   ```bash
   gcc integration_comparison.c -o integration_comparison -lm

![fdf](compare.jpg)
![fdf](compare2.jpg)

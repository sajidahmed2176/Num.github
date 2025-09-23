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

---
![fdf](compare.jpg)
![fdf](compare2.jpg)

## (IV) Conclusion

- Simpson’s Rule is generally more accurate than Trapezoidal Rule for smooth functions.
- Trapezoidal Rule gives a reasonable approximation but with higher error.
- Increasing the number of intervals improves accuracy, with Simpson’s Rule converging faster.
- This project demonstrates the practical advantage of Simpson’s Rule in numerical integration.

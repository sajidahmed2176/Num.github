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
   ./integration_comparison
#include <stdio.h>
#include <math.h>

/*
 * CSE261 Group Assignment
 * Topic: Implementation and Comparison of Simpson's and Trapezoidal Rules
 * Language: C
 *
 * --- How to Compile and Run ---
 * 1. Save the code as 'integration_comparison.c'
 * 2. Compile: gcc integration_comparison.c -o integration_comparison -lm
 * 3. Run: ./integration_comparison
 *
 * This program calculates the definite integrals of:
 *   (1) sin(x) from 0 to π
 *   (2) ln(x)  from 1 to 2
 * using the Trapezoidal Rule and Simpson's Rule,
 * then compares the results with their exact values.
 */

double trapezoidal_rule(double (*f)(double), double a, double b, int n);
double simpsons_rule(double (*f)(double), double a, double b, int n);

double f1(double x) { return sin(x); }
double f2(double x) { return log(x); }

int main() {
    int n;
    double a1 = 0.0, b1 = M_PI;
    double a2 = 1.0, b2 = 2.0;
    double exact1 = 2.0;
    double exact2 = 2 * log(2) - 1;

    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Simpson's Rule requires even n, so using n+1.\n");
        n++;
    }

    double trap1 = trapezoidal_rule(f1, a1, b1, n);
    double simp1 = simpsons_rule(f1, a1, b1, n);

    double trap2 = trapezoidal_rule(f2, a2, b2, n);
    double simp2 = simpsons_rule(f2, a2, b2, n);

    double error_trap1 = fabs(trap1 - exact1) / exact1 * 100.0;
    double error_simp1 = fabs(simp1 - exact1) / exact1 * 100.0;
    double error_trap2 = fabs(trap2 - exact2) / exact2 * 100.0;
    double error_simp2 = fabs(simp2 - exact2) / exact2 * 100.0;

    printf("\n--- Numerical Integration Results ---\n");

    printf("\n1) Integral of sin(x) from 0 to π:\n");
    printf("   Exact Value = %.8lf\n", exact1);
    printf("   • Trapezoidal Rule Result = %.8lf | Error %% = %.6lf%%\n", trap1, error_trap1);
    printf("   • Simpson's Rule Result  = %.8lf | Error %% = %.6lf%%\n", simp1, error_simp1);

    printf("\n2) Integral of ln(x) from 1 to 2:\n");
    printf("   Exact Value = %.8lf\n", exact2);
    printf("   • Trapezoidal Rule Result = %.8lf | Error %% = %.6lf%%\n", trap2, error_trap2);
    printf("   • Simpson's Rule Result  = %.8lf | Error %% = %.6lf%%\n", simp2, error_simp2);

    return 0;
}

double trapezoidal_rule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        sum += 2 * f(a + i * h);
    }
    return (h / 2.0) * sum;
}

double simpsons_rule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0)
            sum += 2 * f(a + i * h);
        else
            sum += 4 * f(a + i * h);
    }
    return (h / 3.0) * sum;
}
Enter number of intervals (n): 10

--- Numerical Integration Results ---

1) Integral of sin(x) from 0 to π:
   Exact Value = 2.00000000
   • Trapezoidal Rule Result = 2.00824841 | Error % = 0.412421%
   • Simpson's Rule Result  = 2.00010952 | Error % = 0.005476%

2) Integral of ln(x) from 1 to 2:
   Exact Value = 0.38629436
   • Trapezoidal Rule Result = 0.38572751 | Error % = 0.146824%
   • Simpson's Rule Result  = 0.38629436 | Error % = 0.000000%

---
![fdf](compare.jpg)
![fdf](compare2.jpg)
##(IV) Conclusion

- Simpson’s Rule is generally more accurate than Trapezoidal Rule for smooth functions.
- Trapezoidal Rule gives a reasonable approximation but with higher error.
- Increasing the number of intervals improves accuracy, with Simpson’s Rule converging faster.
- This project demonstrates the practical advantage of Simpson’s Rule in numerical integration.

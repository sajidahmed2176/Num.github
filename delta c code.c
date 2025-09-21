// Simpson's rule requires an even number of subintervals
    if (n % 2 != 0) {
        printf("Simpson's rule requires even n, so using n+1.\n");
        n++;
    }
    // Compute integrals using both methods
    double trap1 = trapezoidal_rule(f1, a1, b1, n);
    double simp1 = simpsons_rule(f1, a1, b1, n);

    double trap2 = trapezoidal_rule(f2, a2, b2, n);
    double simp2 = simpsons_rule(f2, a2, b2, n);

    // Calculate percentage errors
    double error_trap1 = fabs(trap1 - exact1) / exact1 * 100.0;
    double error_simp1 = fabs(simp1 - exact1) / exact1 * 100.0;
    double error_trap2 = fabs(trap2 - exact2) / exact2 * 100.0;
    double error_simp2 = fabs(simp2 - exact2) / exact2 * 100.0;

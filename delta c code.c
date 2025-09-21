/*
 * trapezoidal_rule
 * ----------------
 * Approximates the integral of a function f(x) from a to b
 * using the composite Trapezoidal Rule with n subintervals.
 */
double trapezoidal_rule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        sum += 2 * f(a + i * h);
    }
    return (h / 2.0) * sum;
}

#include<stdio.h>
#include<math.h>
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


/* ---------- Function Prototypes ---------- */
double trapezoidal_rule(double(*f)(double),double a,double b,int n);
double simpsons_rule(double(*f)(double),double a,double b,int n);
//*Function to integrate*/

double f1(double x) {return sin(x);}//f1=sin(x)
double f2(double x) {return log(x);}//f2=ln(x)

/* ---------- MAIN PROGRAM ---------- */
int main(){
  int n; //Number of subintervals

//Intergration limits and exact values
double a1 = 0.0, b1 = M_PI;   //sin(X) from 0 to π
double a2 = 1.0, b2 = 2.0;    //ln(x) from 1 to 2
double exact1 = 2.0;          //∫0 to π sin(x) dx
double exact2 = 2 * log(2) - 1;   // ∫1 to 2 ln(x) dx

printf("Enter numbers of intervals (n): ");
scanf("%d", &n);

// Simpson's Rule requires even numbers of subintervals
if(n % 2 != 0){
   printf("Simpson's Rule requires even n, so using n+1.\n");
   n++;
}

/* ---Compute integrals using both methods ---*/
double trap1 =trapezoidal_rule(f1,a1,b1,n);
double simp1 =simpsons_rule(f1,a1,b1,n);

double trap2 =trapezoidal_rule(f2,a2,b2,n);
double simp2 =simpsons_rule(f2,a2,b2,n);

/* --- Calculate percentage errors ---*/
double error_trap1 =fabs(trap1 - exact1) / exact1 * 100.0;
double error_simp1 =fabs(simp1 - exact1) / exact1 * 100.0;
double error_trap2 =fabs(trap2-exact2) / exact2 * 100.0;
double error_simp2 =fabs(simp2 -exact2) / exact2 * 100.0;
double space

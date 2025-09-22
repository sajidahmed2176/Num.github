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

/* --- Display results --- */
    printf("\n--- Numerical Integration Results ---\n");

    printf("\n1) Integral of sin(x) from 0 to π:\n");
    printf("   • Trapezoidal Rule Result = %.8lf | Error %% = %.6lf%%\n", trap1, error_trap1);
    printf("   • Simpson's Rule Result  = %.8lf | Error %% = %.6lf%%\n", simp1, error_simp1);

    printf("\n2) Integral of ln(x) from 1 to 2:\n");
    printf("   • Trapezoidal Rule Result = %.8lf | Error %% = %.6lf%%\n", trap2, error_trap2);
    printf("   • Simpson's Rule Result  = %.8lf | Error %% = %.6lf%%\n", simp2, error_simp2);

    return 0;
}

/* ==========================================================
 * Function: trapezoidal_rule
 * Purpose : Approximates ∫ f(x) dx from a to b
 * Method  : Composite Trapezoidal Rule
 * Inputs  : f -> pointer to function, a -> lower limit, b -> upper limit, n -> number of intervals
 * Returns : approximate integral value
 * ========================================================== */
double trapezoidal_rule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        sum += 2 * f(a + i * h);
    }
    return (h / 2.0) * sum;
}
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;   // assume the first element is the minimum
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // update minimum index
            }
        }
        // swap if new minimum is found
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];   // current element
        j = i - 1;

        // Move elements that are greater than key one step ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  // insert key in correct position
#include <stdio.h>
#define N 4   // Change this for different N

int board[N][N];

// Check if placing queen is safe
int isSafe(int row, int col) {
    int i, j;

    // Check this row on left
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;

    // Check upper diagonal on left
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i]
Knapsack(i, W) = max(
    value[i] + Knapsack(i-1, W - weight[i]),   // take item
    Knapsack(i-1, W)                           // don’t take item
)


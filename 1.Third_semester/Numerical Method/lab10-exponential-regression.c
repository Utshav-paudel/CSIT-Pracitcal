//wap to implement exponential regression
#include<stdio.h>
#include<math.h>
#define S 50
int main() {
    int n, i;
    float x[S], y[S], sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, sumlnY = 0, sumXlnY = 0, a, b;

    /* Input */
    printf("EXPONENTIAL REGRESSION\n\n");
    printf("Number of data points: ");
    scanf("%d", &n);
    printf("Enter data:\n");
    for (i = 1; i <= n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    /* Calculating Required Sums */
    for (i = 1; i <= n; i++) {
        sumX += x[i];
        sumX2 += x[i] * x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumlnY += log(y[i]);
        sumXlnY += x[i] * log(y[i]);
    }

    /* Calculating a and b */
    b = (n * sumXlnY - sumX * sumlnY) / (n * sumX2 - sumX * sumX);
    a = exp((sumlnY - b * sumX) / n);

    /* Displaying the Result */
    printf("Values are: a = %0.2f and b = %0.2f\n", a, b);
    printf("Equation of best fit is: y = %0.2f * exp(%0.2f * x)\n", a, b);

    return 0;
}


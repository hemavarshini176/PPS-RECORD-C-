/*
Aim:
    To evaluate mathematical expressions using sqrt(), pow() and log() from math.h.

Algorithm:
    1. Declare variables.
    2. Use library functions to compute expressions.
    3. Print results.
    4. Stop the program.

Sample Output:
    Area of circle = 28.27
    Expression 1 value = 13.50
    Expression 2 value = 4.58
    log(x + y + z) = 1.79
*/

#include <stdio.h>
#include <math.h>

int main() {
    float r = 3.0, A = 2, B = 4, C = 6, x = 2, y = 3, z = 4;

    float area = 3.14159 * r * r;
    float expr1 = A + B * (2 * C / 3) + A * A + 2 * B;
    float expr2 = (A + B + C) / 3 + A * A - 2 * B;
    float expr3 = log(x + y + z);

    printf("Area of circle = %.2f\n", area);
    printf("Expression 1 value = %.2f\n", expr1);
    printf("Expression 2 value = %.2f\n", expr2);
    printf("log(x + y + z) = %.2f\n", expr3);

    return 0;
}

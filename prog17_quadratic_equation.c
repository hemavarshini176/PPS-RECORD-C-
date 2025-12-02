/*
Aim:
    To find the roots of a quadratic equation ax^2 + bx + c = 0.

Algorithm:
    1. Read a, b, c.
    2. Compute discriminant d = b^2 - 4ac.
    3. If d > 0 → two distinct real roots.
    4. If d == 0 → two equal real roots.
    5. If d < 0 → imaginary roots.
    6. Print roots accordingly.

Sample Output:
    Enter a, b, c: 1 -3 2
    Roots are real and different: 2.00 and 1.00
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r1);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-d) / (2 * a);
        printf("Roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

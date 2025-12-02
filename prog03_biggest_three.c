/*
Aim:
    To find the largest among three numbers using if-else statements.

Algorithm:
    1. Read three numbers.
    2. Compare using if-else.
    3. Print the biggest number.
    4. Stop the program.

Sample Output:
    Enter three numbers: 5 12 9
    12 is the largest
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is the largest\n", a);
    else if (b >= a && b >= c)
        printf("%d is the largest\n", b);
    else
        printf("%d is the largest\n", c);

    return 0;
}

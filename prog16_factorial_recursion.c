/*
Aim:
    To find the factorial of a given number using recursion.

Algorithm:
    1. Define a recursive function fact(n):
           If n == 0 → return 1.
           Else → return n * fact(n - 1).
    2. In main(), read n from the user.
    3. Call fact(n) and store the result.
    4. Display the factorial.
    5. Stop the program.

Sample Output:
    Enter a number: 5
    Factorial = 120
*/

#include <stdio.h>

int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));

    return 0;
}

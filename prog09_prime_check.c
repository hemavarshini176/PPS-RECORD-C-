/*
Aim:
    To check whether a number is prime.

Algorithm:
    1. Read n.
    2. If n < 2 → not prime.
    3. For i = 2 to n/2:
           if n % i == 0 → not prime
    4. Else prime.

Sample Output:
    Enter number: 17
    Prime Number
*/

#include <stdio.h>

int main() {
    int n, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not Prime\n");
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) flag = 1;

    if (flag == 0)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    return 0;
}

/*
Aim:
    To compute sum of first n natural numbers using for loop.

Algorithm:
    1. Read n.
    2. Loop i = 1 to n:
           sum += i
    3. Print sum.
    4. Stop program.

Sample Output:
    Enter n: 5
    Sum = 15
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);

    return 0;
}

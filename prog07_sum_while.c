/*
Aim:
    To compute sum of first n natural numbers using while loop.

Algorithm:
    1. Read n.
    2. Set i=1 and sum=0.
    3. While i <= n:
           sum += i
           i++
    4. Print result.

Sample Output:
    Enter n: 4
    Sum = 10
*/

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

/*
Aim:
    To generate Fibonacci series up to n terms.

Algorithm:
    1. Read n.
    2. Set a=0, b=1.
    3. Loop n times:
           print a
           next = a + b
           a = b
           b = next

Sample Output:
    Enter terms: 6
    0 1 1 2 3 5
*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

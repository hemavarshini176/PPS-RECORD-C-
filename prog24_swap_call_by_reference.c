/*
Aim:
    To swap two numbers using call by reference (pointers).

Algorithm:
    1. Define swap(int *a, int *b):
           temp = *a
           *a = *b
           *b = temp
    2. In main, read x and y.
    3. Print values before swap.
    4. Call swap(&x, &y).
    5. Print values after swap.
    6. Stop the program.

Sample Output:
    Enter x and y: 10 20
    Before swap: x = 10 y = 20
    After swap: x = 20 y = 10
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d y = %d\n", x, y);

    return 0;
}

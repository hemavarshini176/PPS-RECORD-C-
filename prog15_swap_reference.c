/*
Aim:
    To swap two numbers using call by reference.

Algorithm:
    1. Define swap() using pointers.
    2. Read x and y.
    3. Call swap(&x, &y).
    4. Print before and after swap.

Sample Output:
    Before swap: 10 20
    After swap: 20 10
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: %d %d\n", x, y);
    swap(&x, &y);
    printf("After swap: %d %d\n", x, y);

    return 0;
}

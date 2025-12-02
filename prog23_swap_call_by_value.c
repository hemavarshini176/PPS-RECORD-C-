/*
Aim:
    To swap two numbers using a function with call by value.

Algorithm:
    1. Define function swap(a, b):
           use a temporary variable and swap local copies.
           print values inside function.
    2. In main, read x and y.
    3. Print x and y before calling swap.
    4. Call swap(x, y).
    5. Print x and y after calling swap.
    6. Observe that original values do not change.

Sample Output:
    Enter x and y: 10 20
    Inside function (Call by Value): a = 20 b = 10
    Outside function: x = 10 y = 20
*/

#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function (Call by Value): a = %d b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    swap(x, y);
    printf("Outside function: x = %d y = %d\n", x, y);

    return 0;
}

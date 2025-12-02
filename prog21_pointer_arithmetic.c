/*
Aim:
    To understand pointer arithmetic using an integer array.

Algorithm:
    1. Declare an integer array arr[5].
    2. Initialize pointer p to point to arr.
    3. Use a loop from 0 to 4.
    4. Print *(p + i) in each iteration.
    5. Stop the program.

Sample Output:
    Value = 10
    Value = 20
    Value = 30
    Value = 40
    Value = 50
*/

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("Value = %d\n", *(p + i));
    }

    return 0;
}

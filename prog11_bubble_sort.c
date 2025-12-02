/*
Aim:
    To sort an array using bubble sort.

Algorithm:
    1. Read n and array.
    2. Repeat passes:
           Compare adjacent elements.
           Swap if needed.
    3. Print sorted array.

Sample Output:
    Enter n: 5
    5 3 1 4 2
    Sorted: 1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    printf("Sorted: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

/*
Aim:
    To sort an array using insertion sort.

Algorithm:
    1. Read n and elements.
    2. For i=1 to n-1:
           key = a[i]
           shift elements greater than key
           insert key into correct position
    3. Print sorted array.

Sample Output:
    Enter n: 5
    9 4 7 2 1
    Sorted: 1 2 4 7 9
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Sorted: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

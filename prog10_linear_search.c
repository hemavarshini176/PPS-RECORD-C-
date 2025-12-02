/*
Aim:
    To search an element using linear search.

Algorithm:
    1. Read n.
    2. Read array elements.
    3. Read key.
    4. Traverse array:
           if arr[i] == key → found.
    5. Print position or not found.

Sample Output:
    Enter n: 5
    Enter elements: 3 7 2 9 6
    Enter key: 9
    Found at position 4
*/

#include <stdio.h>

int main() {
    int n, key, found = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
        if (arr[i] == key) {
            found = 1;
            printf("Found at position %d\n", i + 1);
            break;
        }

    if (!found)
        printf("Not found\n");

    return 0;
}

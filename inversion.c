// Find the  number of inversion pairs in an array of elements.
// Approach 1: Traverse through the array and for every index find number of smaller elements in the right side of the array (time complexity is n^2)

#include <stdio.h>

void InversionPair(int m, int a[], int *count) {
    int i, j;
    *count = 0;
    for (i = 0; i < m - 1; i++) {
        for (j = i + 1; j < m; j++) { 
            if (a[i] > a[j]) {
                (*count)++;
            }
        }
    }
}

int main() {
    int i, n, arr[50], count = 0; 
    printf("enter the number of elements: ");
    scanf("%d", &n);
    printf("enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    InversionPair(n, arr, &count);
    printf("Number of inversion pairs: %d", count);
}

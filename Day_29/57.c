// Find the sum of array elements.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n]; // array of size n
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add while reading
    }
    printf("%d\n", sum);
    return 0;
}


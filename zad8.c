#include <stdio.h>

int minimum(int *arr, int m, int n) {
    if (m == n) {
        return arr[m];
    }

    int mid = (m + n) / 2;
    int left = minimum(arr, m, mid);
    int right = minimum(arr, mid + 1, n);

    return (left < right) ? left : right;
}

int main() {
    int n;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);

    int arr[n];

    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Najmniejszy element: %d\n", minimum(arr, 0, n - 1));

    return 0;
}

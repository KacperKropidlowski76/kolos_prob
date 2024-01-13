#include <stdio.h>
#include <stdlib.h>

int sum_divide_and_conquer(int arr[], int start, int end) {
    if (start == end) {
        return arr[start];
    }

    int middle = (start + end) / 2;

    int left_sum = sum_divide_and_conquer(arr, start, middle);
    int right_sum = sum_divide_and_conquer(arr, middle + 1, end);

    return left_sum + right_sum;
}

int main() {
    int n;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("B£¥D: Nieprawid³owy rozmiar tablicy.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("B£¥D: Nie uda³o siê zaalokowaæ pamiêci.\n");
        return 1;
    }

    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sum_divide_and_conquer(arr, 0, n - 1);

    printf("Suma elementów tablicy: %d\n", result);

    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

void get_matrix(int **matrix, int rows, int cols) {
    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int min_sum_in_rows(int **matrix, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        int min = matrix[i][0];
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
        sum += min;
    }
    return sum;
}

int main() {
    int rows, cols;

    printf("Podaj liczbe wierszy i kolumn: ");
    scanf("%d %d", &rows, &cols);

    int **matrix = create_matrix(rows, cols);

    get_matrix(matrix, rows, cols);

    printf("Suma najmniejszych elementów w wierszach: %d\n", min_sum_in_rows(matrix, rows, cols));

    // Zwolnienie pamiêci
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

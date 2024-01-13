#include <stdio.h>

void mirrorVertical(int **arr, int rows, int cols) {
    for (int i = 0; i < rows / 2; i++) {
        for (int j = 0; j < cols; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[rows - i - 1][j];
            arr[rows - i - 1][j] = temp;
        }
    }
}

void mirrorHorizontal(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][cols - j - 1];
            arr[i][cols - j - 1] = temp;
        }
    }
}

void printMatrix(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Podaj liczbe wierszy i kolumn: ");
    scanf("%d %d", &rows, &cols);

    int **matrix;
    matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int choice;
    printf("Wybierz operacjê:\n");
    printf("1. Odbicie lustrzane w poziomie\n");
    printf("2. Odbicie lustrzane w pionie\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            mirrorHorizontal(matrix, rows, cols);
            break;
        case 2:
            mirrorVertical(matrix, rows, cols);
            break;
        default:
            printf("Niepoprawny wybór\n");
            return 1;
    }

    printf("Wynikowa tablica:\n");
    printMatrix(matrix, rows, cols);

    // Zwolnienie pamiêci
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

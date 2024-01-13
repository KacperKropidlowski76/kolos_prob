#include <stdio.h>

int main() {
    int n;

    printf("Podaj liczbê rzêdów piramidy: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Dodanie pustych miejsc przed liczbami
        for (int k = n - i; k > 0; k--) {
            printf(" ");
        }

        // Wyœwietlenie liczb
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

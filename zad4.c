#include <stdio.h>

int main() {
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);

    int tab[n];
    int suma = 0, parzyste = 0, nieparzyste = 0;
    int najwiekszy = 0; // Dodano zmienn� do przechowywania najwi�kszej warto�ci

    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        suma += tab[i];

        if (tab[i] % 2 == 0) {
            parzyste = 1;
        } else {
            nieparzyste = 1;
        }

        // Sprawdzanie najwi�kszej warto�ci
        if (i == 0 || tab[i] > najwiekszy) {
            najwiekszy = tab[i];
        }
    }

    printf("Najwi�kszy element: %d\n", najwiekszy);
    printf("�rednia: %.2f\n", (float)suma / n);

    if (parzyste && nieparzyste) {
        printf("Tablica zawiera zar�wno elementy parzyste jak i nieparzyste\n");
    } else if (parzyste) {
        printf("Tablica zawiera tylko elementy parzyste\n");
    } else if (nieparzyste) {
        printf("Tablica zawiera tylko elementy nieparzyste\n");
    }

    return 0;
}

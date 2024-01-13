#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Podaj dwie liczby: ");
    scanf("%f %f", &a, &b);


        printf("Wybierz operacjê:\n");
        printf("1. Dodawanie\n");
        printf("2. Odejmowanie\n");
        printf("3. Mno¿enie\n");
        printf("4. Dzielenie\n");
        printf("5. Zakoñcz program\n");

        scanf(", %d", &choice);

        switch (choice) {
            case 1:
                printf("Wynik dodawania: %.2f\n", a + b);
                break;
            case 2:
                printf("Wynik odejmowania: %.2f\n", a - b);
                break;
            case 3:
                printf("Wynik mno¿enia: %.2f\n", a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Wynik dzielenia: %.5f\n", a / b);
                } else {
                    printf("Dzielenie przez zero!\n");
                }
                break;
            case 5:
                printf("Program zakoñczony\n");
                break;
            default:
                printf("Niepoprawny wybór\n");
        }


    return 0;
}

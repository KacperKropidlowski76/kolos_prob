#include <stdio.h>
#include <math.h>

int main() {
    float a, b;

    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    scanf("%f %f", &a, &b);

    printf("Suma: %.2f\n", a + b);
    printf("Ró¿nica: %.2f\n", a - b);
    printf("Iloczyn: %.2f\n", a * b);
    printf("Iloraz: %.2f\n", a / b);

    // Sprawdzenie, czy liczby s¹ ca³kowite
    if ((int)a == a && (int)b == b) {
        printf("Reszta z dzielenia: %d\n", (int)a % (int)b);

    }
    printf("Potêga: %.2f\n", pow(a, b));
    printf("Pierwiastek kwadratowy z %.2f: %.3f\n", a, sqrt(a));
    printf("Pierwiastek kwadratowy z %.2f: %.3f\n", b, sqrt(b));

    return 0;
}

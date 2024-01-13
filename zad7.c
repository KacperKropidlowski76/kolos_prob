#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 1; // Nie jest palindromem
        }
    }
    return 0; // Jest palindromem
}

int main() {
    char str[100];

    printf("Podaj napis: ");
    fgets(str, sizeof(str), stdin);

    // Usuniêcie znaku nowej linii z koñca napisu
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    if (isPalindrome(str, n)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

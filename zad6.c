#include <stdio.h>

void encryptCesar(char *text, int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A') + key) % 26 + 'A';
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a') + key) % 26 + 'a';
        }
    }
}

int main() {
    char text[100];
    int key;

    printf("Podaj tekst do zaszyfrowania:");
    fgets(text, sizeof(text), stdin);


    printf("Podaj klucz szyfru Cezara:");
    scanf("%d", &key);

    encryptCesar(text, key);

    printf("Zaszyfrowany tekst: %s\n", text);

    return 0;
}

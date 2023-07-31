#include <stdio.h>
#include <string.h>

int znajduje_sie_w(char znak, char *lancuch) {
    int i;
    for (i = 0; lancuch[i] != '\0'; i++) {
        if (lancuch[i] == znak) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char lancuch[100];
    printf("Wprowadź łańcuch: ");
    scanf("%s", lancuch);

    int i;
    for (i = 0; i < strlen(lancuch); i++) {
        char znak;
        printf("Wprowadź znak do sprawdzenia: ");
        scanf(" %c", &znak);
        if (znajduje_sie_w(znak, lancuch)) {
            printf("Znak '%c' znajduje się w łańcuchu\n", znak);
        } else {
            printf("Znak '%c' nie znajduje się w łańcuchu\n", znak);
        }
    }
    return 0;
}

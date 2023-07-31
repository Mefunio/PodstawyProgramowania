#include <stdio.h>

struct zbiorka {
    char imie[20];
    char grupa[20];
    int kwota;
};

int main() {
    int liczbaOsob;
    printf("Ile osób chcesz dodać do zbiórki? ");
    scanf("%d", &liczbaOsob);
    struct zbiorka osoby[liczbaOsob];

    for (int i = 0; i < liczbaOsob; i++) {
        printf("Podaj imię osoby: ");
        scanf("%s", osoby[i].imie);
        printf("Podaj nazwę grupy: ");
        scanf("%s", osoby[i].grupa);
        printf("Podaj kwotę: ");
        scanf("%d", &osoby[i].kwota);
    }

    printf("Podsumowanie:\n");
    for (int i = 0; i < liczbaOsob; i++) {
        printf("Imie: %s, Grupa: %s; kwota %d;\n", osoby[i].imie, osoby[i].grupa, osoby[i].kwota);
    }
    return 0;
}

#include <stdio.h>

int main() {

    int a, b, wynik;
    int * wks_a;
    int * wks_b;
    wks_a = &a;
    wks_b = &b;

    printf("Podaj a: ");
    scanf("%d", &a);

    printf("Podaj b: ");
    scanf("%d", &b);

    wynik = *wks_a + *wks_b;

    printf("Wynik: %d", wynik);

    return 0;
}



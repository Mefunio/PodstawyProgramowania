#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, suma = 0;
    int *liczby;

    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);

    liczby = (int *) malloc(n * sizeof(int));
    if (liczby == NULL) {
        printf("Alokacja pamieci nie powiodla sie.\n");
        return 1;
    }

    printf("Wprowadz %d liczby: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &liczby[i]);
        suma += liczby[i];
    }

    printf("Suma: %d\n", suma);

    free(liczby);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int * tablica_wykonaj (int elem, int wart) {
    int *tab;
    tab = (int *) malloc(elem * sizeof(int)); // alokacja pamięci
    if (tab == NULL) {
        printf("Alokacja pamieci nie powiodla sie.\n");
        return NULL;
    }
    for (int i = 0; i < elem; i++) {
        tab[i] = wart;
    }
    return tab;
}

void wyswietl_tab(const int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(void)
{
    int *wt;
    int rozmiar;
    int wartosc;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &rozmiar);
    while(rozmiar > 0)
    {
        printf("Podaj wartosc: ");
        scanf("%d", &wartosc);
        wt = tablica_wykonaj(rozmiar, wartosc);
        if(wt)
        {
            wyswietl_tab(wt, rozmiar);
            free(wt);
        }
        printf("Podaj liczbe elementow (<1 -koniec): ");
        scanf("%d", &rozmiar);
    }
    printf("Dziekuje za uwage.\n");
    return 0;
}
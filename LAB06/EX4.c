#include <stdio.h>

#define N 10  // rozmiar tablicy

int main(void) {
    int array[N] = {9, 3, 5, 8, 9, 2, 2, 7, 3, 0};
    // deklaracja i inicjalizacja tablicy
    int *pa;  // deklaracja wskaźnika do elementów tablicy
    int temp;  // zmienna tymczasowa
    int i, j;

    // Sortowanie bąbelkowe
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            pa = &array[j];  // przypisanie adresu elementu tablicy do wskaźnika
            if (*pa > array[j + 1]) {  // porównanie elementów za pomocą wskaźników
                // Zamiana miejscami
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Wypisanie posortowanej tablicy
    printf("Posortowana tablica:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

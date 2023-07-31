#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void fill_array(int *array, int n);
void fill_array_float(float *array, int n);
int sum_array(int *array, int n);
float sum_array_float(float *array, int n);
float sum_arrays(int *array_int, float *array_float, int n);
int max(int a, int b);
int min(int a, int b);

int main(void) {
    int array_int[N];
    float array_float[N];

    // Wypełnij tablicę int liczbami losowymi z zakresu 0-100
    fill_array(array_int, N);

    // Wypełnij tablicę float liczbami losowymi z przedziału 0-1
    fill_array_float(array_float, N);

    // Wypisz wszystkie elementy tablicy int
    printf("Tablica int:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array_int[i]);
    }
    printf("\n");

    // Wypisz wszystkie elementy tablicy float
    printf("Tablica float:\n");
    for (int i = 0; i < N; i++) {
        printf("%.3f ", array_float[i]);
    }
    printf("\n");

    // Oblicz sumę elementów tablicy int
    int sum_int = sum_array(array_int, N);
    printf("Suma elementów tablicy int: %d\n", sum_int);

    // Oblicz sumę elementów tablicy float
    float sum_float = sum_array_float(array_float, N);
    printf("Suma elementów tablicy float: %.3f\n", sum_float);

    // Oblicz sumę elementów obu tablic
    float sum = sum_arrays(array_int, array_float, N);
    printf("Suma elementów obu tablic: %.3f\n", sum);

    // Wskaż i wypisz 5 i 10 element tablicy int
    printf("5 element tablicy int: %d\n", *(array_int + 4));
    printf("10 element tablicy int: %d\n", *(array_int + 9));

    // Wskaż i wypisz 5 i 10 element tablicy float
    printf("5 element tablicy float: %.3f\n", *(array_float + 4));
    printf("10 element tablicy float: %.3f\n", *(array_float + 9));

    // Pobierz 2 elementy z tablicy int
    int a = *(array_int + 3);
    int b = *(array_int + 7);

    // Wypisz największą i najmniejszą wartość z pobranych elementów
    printf("Największa wartość: %d\n", max(a, b));
    printf("Najmniejsza wartość: %d\n", min(a, b));

    return 0;
}

// Funkcja wypełniająca tablicę int liczbami losowymi z zakresu 0-100
void fill_array(int *array, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        *(array + i) = rand() % 101;
    }
}

// Funkcja wypełniająca tablicę float liczbami losowymi z przedziału 0-1
void fill_array_float(float *array, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        *(array + i) = (float) rand() / RAND_MAX;
    }
}

// Funkcja obliczająca sumę elementów tablicy int
int sum_array(int *array, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(array + i);
    }
    return sum;
}

// Funkcja obliczająca sumę elementów tablicy float
float sum_array_float(float *array, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(array + i);
    }
    return sum;
}

// Funkcja obliczająca sumę elementów obu tablic
float sum_arrays(int *array_int, float *array_float, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(array_int + i) + *(array_float + i);
    }
    return sum;
}

// Funkcja zwracająca większą z dwóch liczb całkowitych
int max(int a, int b) {
    return a > b ? a : b;
}

// Funkcja zwracająca mniejszą z dwóch liczb całkowitych
int min(int a, int b) {
    return a < b ? a : b;
}

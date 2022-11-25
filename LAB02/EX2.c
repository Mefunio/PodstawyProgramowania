#include <stdio.h>

int main() {

    int x, final;

    printf("Podaj liczbe: ");
    scanf("%d", &x);

    if (x < 0) {
        final = -x;
    }
    else {
        final = x;
    }

    printf("Wartosc bezwzgledna z liczby %d wynosi: ", x);
    printf("%d", final);


    return 0;
}

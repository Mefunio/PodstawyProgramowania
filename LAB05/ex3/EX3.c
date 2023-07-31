#include <stdio.h>

int oblicz(int n);

int uzyt (int y);

int main() {
    int wynik, x;

    x = uzyt(x);

    wynik = oblicz(x);

    printf("Liczba Binarna: %d \n", wynik);
    return 0;
}

int oblicz(int n){
    int pojemnik, reszta, z = 0, i = 1;
    while (n!=0) {
        reszta = n % 2;
        n /= 2;
        z += reszta * i;
        i *= 10;
    }

    pojemnik = z;

    return pojemnik;

}

int uzyt(int y){

    do{

        printf ("Wprowadz liczbe dziesietna: ");
        scanf("%d", &y);

        if (y < 0)
            printf ("Blad!\n");
        else
            continue;

    }
    while (y<0);


    return y;
}

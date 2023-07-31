#include <stdio.h>


double min(double a, double b);

int main() {

    double x, y, wynik;

    printf("Podaj x: \n");
    scanf("%lf", &x);

    printf("Podaj y: \n");
    scanf("%lf", &y);


    wynik = min(x, y);

    printf("%lf", wynik);

    return 0;
}

double min(double a, double b) {

    double wyn;

    if (a < b) {

        wyn = a;

    } else if (a > b) {

        wyn = b;

    }
    else {

        wyn = 0;
        printf("Liczby sa rowne\n");

    }

    return wyn;
}


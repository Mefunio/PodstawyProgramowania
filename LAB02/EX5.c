#include <stdio.h>
#include <math.h>

int main() {

    int wybor;

    float a, b, c, p, wynik;

    printf("Jaka figure chcesz policzyc?\n");

    printf("1 - Kwadrat\n");
    printf("2 - Prostokat\n");
    printf("3 - Trojkat\n");

    scanf("%d", &wybor);

    switch(wybor){

        case 1:
            printf("Podaj a: ");
            scanf("%f", &a);

            wynik = a*a;
            printf("Pole kwadratu wynosi: %f", wynik);
            break;

        case 2:
            printf("Podaj a: ");
            scanf("%f", &a);
            printf("Podaj b: ");
            scanf("%f", &b);

            wynik = a*b;
            printf("Pole prostokatu wynosi: %f", wynik);
            break;

        case 3:
            printf("Podaj a: ");
            scanf("%f", &a);
            printf("Podaj b: ");
            scanf("%f", &b);
            printf("Podaj c: ");
            scanf("%f", &c);

            p = (a+b+c) / 2;
            wynik = sqrt(p * (p-a)*(p-b)*(p-c));

            printf("Pole trojkatu wynosi: %f", wynik);

            break;

        default:
            printf("Niepoprawny wybor\n");
            break;

    }
    return 0;
}

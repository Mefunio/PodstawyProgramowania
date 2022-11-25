#include <stdio.h>

int main() {

    float a, b, wynik;
    int wybor;

    a = 0;
    b = 0;
    wynik = 0;

    printf("Podaj a: ");
    scanf("%f", &a);
    printf("Podaj b: ");
    scanf("%f", &b);

    printf("Jakie dzialanie chcesz wykonac?\n");
    printf("1 - Dodawanie\n");
    printf("2 - Odejmowanie\n");
    printf("3 - Mnozenie\n");
    printf("4 - Dzielenie\n");

    printf("\nWpisz swoj wybor: ");
    scanf("%d", &wybor);


    switch (wybor) {
            case 1:
                wynik = a + b;
                printf("%f + %f = %f", a, b, wynik);
                break;
            case 2:
                wynik = a - b;
                printf("%f - %f = %f", a, b, wynik);
                break;
            case 3:
                wynik = a * b;
                printf("%f * %f = %f", a, b, wynik);
                break;
            case 4:
                if (a != 0) {
                    wynik = a / b;
                    printf("%f / %f = %f", a, b, wynik);
                    break;
                } else {
                    printf("Nie dzieli sie przez 0");
                    break;
                }
            default:
                printf("Niepoprawny wybor\n");
                break;
    }


    return 0;
}

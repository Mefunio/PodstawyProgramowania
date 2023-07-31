#include <stdio.h>
#include <math.h>
#include <string.h>

struct kolo {
    int numer;
    char nazwa[20];
    double a;
    double b;
    double r1;
};

int main() {
    struct kolo k1, k2, k3;

    k1.numer = 1;
    strcpy(k1.nazwa, "Kolo 1");
    k1.a = 1;
    k1.b = 3;
    k1.r1 = 5;

    k2.numer = 2;
    strcpy(k2.nazwa, "Kolo 2");
    k2.a = 10;
    k2.b = 12;
    k2.r1 = 4;

    k3.numer = 3;
    strcpy(k3.nazwa, "Kolo 3");
    k3.a = -4;
    k3.b = -1;
    k3.r1 = 6;

    double x, y;
    printf("Podaj wspolrzedne punktu (x, y): ");
    scanf("%lf%lf", &x, &y);

    if (sqrt((x - k1.a)*(x - k1.a) + (y - k1.b)*(y - k1.b)) < k1.r1) {
        printf("Podany punkt lezy wewnatrz kola %s o polu %lf\n", k1.nazwa, M_PI * k1.r1 * k1.r1);
    } else if (sqrt((x - k2.a)*(x - k2.a) + (y - k2.b)*(y - k2.b)) < k2.r1) {
        printf("Podany punkt lezy wewnatrz kola %s o polu %lf\n", k2.nazwa, M_PI * k2.r1 * k2.r1);
    } else if (sqrt((x - k3.a)*(x - k3.a) + (y - k3.b)*(y - k3.b)) < k3.r1) {
        printf("Podany punkt lezy wewnatrz kola %s o polu %lf\n", k3.nazwa, M_PI * k3.r1 * k3.r1);
    } else {
        printf("Podany punkt nie lezy wewnatrz zadnego z kol.\n");
    }

    return 0;
}

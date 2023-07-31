#include <stdio.h>
#include "EX2_R.h"

int main() {


    printf("Podaj n: \n");
    scanf("%d", &x);


    wynik_int = silnia_int(x);
    wynik_float = silnia_float(x);
    wynik_double = silnia_double(x);


    printf("%d\n", wynik_int);
    printf("%f\n", wynik_float);
    printf("%lf", wynik_double);


    return 0;
}

#include <stdio.h>

int main() {
    float pierwsza, druga, trzecia, czwarta;
    int licznik;

    licznik = 0;

    printf("Podaj 1 liczbe: ");
    scanf("%f", &pierwsza);

    printf("Podaj 2 liczbe: ");
    scanf("%f", &druga);

    printf("Podaj 3 liczbe: ");
    scanf("%f", &trzecia);

    printf("Podaj 4 liczbe: ");
    scanf("%f", &czwarta);

    if (pierwsza >= 0) {
        licznik+=1;
    }
    if (druga >= 0) {
        licznik+=1;
    }
    if (trzecia >= 0) {
        licznik+=1;
    }
    if (czwarta >= 0) {
        licznik +=1;
    }

    if (licznik>2){
        printf("Wiecej jest liczb dodatnich");
    }
    else if (licznik==2){
        printf("Liczb dodatnich i ujemnych jest tyle samo");
    }
    else{
        printf("Wiecej jest liczb ujemnych");
    }

    return 0;
}

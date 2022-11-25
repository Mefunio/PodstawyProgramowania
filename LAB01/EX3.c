#include <stdio.h>

int main(){

    float waga, wzrost, bmi;

    printf("Podaj swoja wage (w kg): ");
    scanf("%f",&waga);

    printf("\nPodaj swoj wzrost (w cm): ");
    scanf("%f",&wzrost);

    bmi = waga / (wzrost*wzrost)*10000;

    printf("\nTwoje bmi wynosi: ");
    printf("%f",bmi);

    getchar();

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){

    int wiek, rok;

    printf("Ile masz lat? ");
    scanf("%d",&wiek);

    rok = 3.156 * pow(10,7);
    rok = rok*wiek;

    printf("Przezyles juz: ");
    printf("%d", rok);
    printf(" sekund");

    getchar();

    return 0;

}
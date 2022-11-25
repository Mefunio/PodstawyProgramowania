#include <stdio.h>

int main() {

    int liczba = 56;

    printf("Liczba zmiennoprzecinkowa (przyblizona do 1) = ");
    printf("%.1lf\n", (float)liczba);

    printf("Liczba zmiennoprzecinkowa (przyblizona do 3) = ");
    printf("%.3lf\n", (float)liczba);

    printf("Liczba w formacie napisowym = ");
    printf("%c\n", (char)liczba);

    getchar();

    return 0;
}

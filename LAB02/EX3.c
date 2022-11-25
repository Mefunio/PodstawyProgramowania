#include <stdio.h>

int main() {

int x, y;

printf("Podaj liczbe: ");
scanf("%d", &y);

if (y < 0) {
    x=-y;
}
else {
    x=y;
}

printf("x = %d", x);



    return 0;
}

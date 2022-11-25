#include <stdio.h>

int main() {

    int liczba = 1, n;
    printf("Podaj ilosc wierszy: \n");
    scanf("%d", &n);


    for(int wiersze=0; wiersze<=n; wiersze++) {
        for (int kolumny = 0; kolumny < wiersze; kolumny++){
            printf("%d ", liczba);
            liczba++;
    }
        printf("\n");
    }


    return 0;
}

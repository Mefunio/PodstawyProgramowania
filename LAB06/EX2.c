#include <stdio.h>

int main() {

    int macierz[3][3] = {};

    for (int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {
            printf("Wprowadź element %d %d: \n", i, j);
            scanf("%d", &macierz[i][j]);

        }

    }

        for(int j = 0, i=0; j < 3; j++) {
            printf("%d %d %d\n", macierz[j][i],macierz[j][i+1],macierz[j][i+2]);
        }

    return 0;
}



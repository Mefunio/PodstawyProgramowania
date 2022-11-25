#include <stdio.h>

int main(){

    int n = 0;
    int z = 1;

    printf("Podaj n: ");
    scanf("%d", &n);

    while(z<=n){

        if(z%2!=0) {
            printf("%d ", z);
        }


        z++;
    }

    return 0;
}
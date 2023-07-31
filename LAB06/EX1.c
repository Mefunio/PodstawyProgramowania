#include <stdio.h>


int main() {

    int array[5];


    for(int i = 0; i < 5; i++) {
        printf("Wprowadź element %d: \n", i+1);
        scanf("%d", &array[i]);

    }

    for(int j = 5; j > 0; j--) {
        printf("%d ",array[j-1]);
    }

    return 0;
}


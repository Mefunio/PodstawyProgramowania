#include <stdio.h>

int main() {

        int count;
        int k = 32;
        for(count=32; count<= 255; count++)
        {

                printf(" %6d - %c", k, k);
                k++;
                if (k % 16 == 0)
                    printf("\n");


        }

return 0;
}
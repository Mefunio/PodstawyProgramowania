#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,proby = 0;
    srand(time(0));
    

    do
    {
        num = rand() % 6 + 1;
        printf("%d\n",num);
        proby++;

    } while (num != 6);

    printf("\nLiczba zostala wylosowana za %d razem\n",proby);

    return 0;
}

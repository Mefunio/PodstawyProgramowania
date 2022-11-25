#include <stdio.h>


int main() {

    char str[100];

    int litery, slowa;

    printf("Wpisz cos! \n");

    scanf("%[^\n]",&str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == ' ')
        {
            slowa++;
        }
        else if(str[i] == '\n')
        {
            slowa++;
        }
        else if(str[i] != ' ' && str[i] != '\n'){
            litery++;
        }
    }

    printf("Ilosc slow: %d\n",slowa);
    printf("Ilosc liter: %d\n",litery);


    return 0;
}

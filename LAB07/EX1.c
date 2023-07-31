#include <stdio.h>
#include <string.h>

void skracaj(char* str, size_t size){

    if(strlen(str) > size){
        str[size] = '\0';
    }
}
int main(void) {

    char str[100];
    fputs("Wprowadz lańcuch: ", stdout);
    fgets(str, sizeof str, stdin);
    str[strlen(str)-1] = '\0';

    size_t size;

    fputs("Podaj rozmiar: ", stdout);
    scanf("%zu", &size);

    skracaj(str, size);

    fputs("Skrócony łańcuch: ", stdout);
    fputs(str, stdout);

    return 0;
}


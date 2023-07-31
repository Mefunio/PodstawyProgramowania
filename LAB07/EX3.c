#include <stdio.h>


void sklej(char *a, char *b) {
    while (*a != '\0') {
        a++;
    }
    while (*b != '\0') {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}

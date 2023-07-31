#include <stdio.h>
#include <math.h>

float sinus(float x);
float cosinus(float x);
float tangens(float x);

int main(){

    float a, radians;
    float sinu, cosinu, tange;

    printf("Podaj kat alpha (w stopniach): ");
    scanf("%f", &a);

    radians = a * (M_PI / 180);

    sinu = sinus(radians);
    cosinu = cosinus(radians);
    tange = tangens(radians);

    if (a == 90) {
        printf("Sinus = 1\n");
        printf("Cosinus = 0\n");
        printf("Tangens = nieokreslony");
    }
    else{
        printf("Sinus = %.4f\n", sinu);
        printf("Cosinus = %.4f\n", cosinu);
        printf("Tangens = %.4f", tange);
    }


return 0;
}

float sinus(float x){

    float result;

    result = sinf(x);

    return result;
}

float cosinus(float x){

    float result;

    result = cosf(x);

    return result;
}

float tangens(float x){

    float result;

    result = tanf(x);

    return result;
}

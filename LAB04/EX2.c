#include <stdio.h>

int main(){

    int godziny = 0;
    int brutto = 0;
    int netto = 0;

    printf("Podaj liczbe przepracowanych godzin: \n");
    scanf("%d",&godziny);

// Brutto
    if(godziny > 40){

        brutto = 40*40+(godziny-40)*60;

    }
    else{

        brutto = godziny * 40;

    }

// Netto

    if(brutto <= 1200){

        netto = brutto * 0.85;

    }
    else if(brutto > 1200 && brutto <= 1800){

       netto = (1200 * 0.85) + ((brutto - 1200) * 0.80);


    }
    else {

        netto = (1200 * 0.85) + 600 * 0.80 + ((brutto - 1800) * 0.75);


    }




    printf("Zarobiles: %d zlotych brutto!\n",brutto);
    printf("Zarobiles: %d zlotych netto!",netto);


return 0;
}

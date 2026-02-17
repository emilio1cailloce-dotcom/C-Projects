//
// Created by Disk Manager on 17/02/2026.
//

#include <stdio.h>
#include <math.h>
float convertDegToRad(float valeurDegre);
float calculDistance(float latA, float longA, float latB, float longB);
float saisirValBornee(int borneInf, int borneSup);
void recupCoordonnees(float *latitude, float *longitude);
float saisirVoyage();
float moyenTransport(float n);

int main(void) {
    float distance;
    //printf("%f \n", convertDegToRad(90));
    //printf("%f \n", convertDegToRad(45));
    //printf("%f \n", calculDistance(convertDegToRad(48.85), convertDegToRad(2.35), convertDegToRad(45.75), convertDegToRad(4.85)));
    //printf("valeur saisie valide : %f \n", saisirValBornee(0,10));
    printf("Vous allez devoir rentrer succesivement la latitude et longitude d'une ville A et de même pour une ville B\n");
    distance=saisirVoyage();
    printf("La distance entre A et B est de %f km\nAllez y\n", distance);
    moyenTransport(distance);
    }


float convertDegToRad(float valeurDegre) {
    float rad = valeurDegre * 3.1415 / 180;
    return rad;
}

float calculDistance(float latA, float longA, float latB, float longB) {
    float distance = 6371*acos(cos(longA-longB)*cos(latA)*cos(latB)+sin(latA)*sin(latB));
    return distance;
}

float saisirValBornee(int borneInf, int borneSup) {
    float n;
    printf("Choisissez un angle: ");
    scanf("%f", &n);
    while (n<borneInf || n>borneSup) {
        if (n<borneInf) {
            printf("C'est trop petit ! : ");
            scanf("%f", &n);
        }
        if (n>borneSup) {
            printf("C'est trop grand ! : ");
            scanf("%f", &n);
        }
    }
    return n;
}

void recupCoordonnees(float *latitude, float *longitude) {
    *latitude = saisirValBornee(-180,180);
    *longitude = saisirValBornee(-90,90);
}


float saisirVoyage() {
    float latitudeA, longitudeA, latitudeB, longitudeB, d;
    recupCoordonnees(&latitudeA, &longitudeA);
    recupCoordonnees(&latitudeB, &longitudeB);
    d=calculDistance(convertDegToRad(latitudeA), convertDegToRad(longitudeA), convertDegToRad(latitudeB), convertDegToRad(longitudeB));
    return d;
}

float moyenTransport(float n) {
    if (n<=5) {
        printf("A pied :\n\n Oooo.\n(    /\n )  /\n(  /\n -");
    }
    if (n>5 && n<=10) {
        printf("A vélo :\n\n        __O\n     _ /<,_\n    (*)/ (*)");
    }
    if (n>10) {
        printf("En voiture :\n\n-0--0-");
    }}
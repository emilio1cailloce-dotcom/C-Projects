#include <stdio.h>

int main(void) {
    int somme;
    printf("Bonjour, entrez la somme demandée : ");
    scanf("%d", &somme);
    while(somme != 0) {
        if (somme <= 100) {
            printf("La somme demandée est : %d\n Retrait accepté\n", somme);
        }
        else {
            printf("La somme demandée est : %d\n Retrait refusé\n", somme);
        }
        printf("Entrez la somme demandée : ");
        scanf("%d", &somme);
    }
    printf("Au revoir");
    return 0;
}
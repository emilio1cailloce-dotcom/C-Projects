//
// Created by Disk Manager on 17/02/2026.
//
#include <stdio.h>
#include <stdio.h>
int somme(int n);
int main(void) {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);
    printf("La somme des entiers de 1 a %d est %d\n", n, somme(n));
    return 0;
}

int somme(int n) {
    int i=1;
    int s = 0;
    for (i = 1; i <= n; i++) {
        s=s+i;
    }
    return s;
}
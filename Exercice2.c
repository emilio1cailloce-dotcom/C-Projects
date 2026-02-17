//
// Created by Disk Manager on 17/02/2026.
//
#include <stdio.h>
#include <math.h>
int fact(int a);

int main(void) {
    long long int n, k, nt;
    printf("Choisissez un nombre n: ");
    scanf("%d", &n);
    printf("Choisissez un nombre k: ");
    scanf("%d", &k);
    if (k>n) {
        nt=(fact(k))/(fact(n)*fact(k-n));
    }
    else {
        nt=(fact(n))/(fact(k)*fact(n-k));
    }
    printf("%d", nt);
}

int fact(int a) {
    long long int facto = 1;
    if (a==0) {
        facto = 1;
    }
    else {
        while (a != 0) {
            facto = facto * a;
            a=a-1;
        }
    }
    return facto;
}

void saisirMinMax(int *min, int *max);

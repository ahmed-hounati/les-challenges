#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N;
    printf("Entrez un nombre entier : ");
    scanf("%d", &N);
    printf("La valeur en octal est : %o\n", N);
    printf("La valeur en hexadecimal est : %X\n", N);

    return 0;
}